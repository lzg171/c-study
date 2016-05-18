/*
画面的载入和位图传输的优化

注意：#include <string>
注意：编译——g++ sdl2.c -o sdl2 -lSDL
*/
#include<SDL/SDL.h>
#include <string>

	//the attributes of the screen,屏幕的各种属性，SCREEN_BPP是像素的位数，这里使用32位色
	const int SCREEN_WIDTH=1280;
	const int SCREEN_HEIGHT=960;
	const int SCREEN_BPP=32;
	
	//the surface that will be used,将要使用的3个图片的声明
	SDL_Surface *message=NULL;//message是一个显示hello的位图
	SDL_Surface *background=NULL;//background作为背景图片
	SDL_Surface *screen=NULL;//screen是一个屏幕
	
	SDL_Surface *load_image(std::string filename)
	{
		SDL_Surface* loadedImage=NULL;//临时储存载入的图片
		SDL_Surface* optimizedImage=NULL;//将使用的优化的图片
		//Load the image
		loadedImage=SDL_LoadBMP( filename.c_str() );/*首先使用SDL_LoadBMP()加载图片，但是不能立即使用，因为位图是24位，而屏幕是32位的，把格式不同的画面加载到另外一个画面上并不是一个好的方法，因为SDL必须在程序运行中实时的转化格式，导致运行缓慢*/
		
		if(loadedImage != NULL)
		{
			//create an optimized image
			optimizedImage=SDL_DisplayFormat(loadedImage);//创建一个新的优化后的画面
			//free the old image
			SDL_FreeSurface(loadedImage);//除去之前加载的图片
		}
		
		return optimizedImage;//返回到加载图片的新的优化了的版本
	}
	
	void apply_surface(int x,int y,SDL_Surface* source,SDL_Surface* destination)
	{
		//make a temporary rectangle to hold the offsets
		SDL_Rect offset;
		//give the offsets to the rectangle
		offset.x=x;
		offset.y=y;
		//blit the surface
		SDL_BlitSurface(source,NULL,destination,&offset);
		
	}
	int main(int argc,char* args[])
	{
		//Initialize all subsystems,初始化所有子系统
		if(SDL_Init(SDL_INIT_EVERYTHING)==-1)
		{
			return 1;
		}
		//set up the screen
		screen=SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT,SCREEN_BPP,SDL_SWSURFACE);
		
		//if there was an error in setting up the screen
		if(screen==NULL)
		{
			return 1;
		}
		
		//set the window caption
		SDL_WM_SetCaption("Hello World",NULL);/*设置标题为"Hello World"*/
		message=load_image("hello.bmp");
		background=load_image("background.bmp");
		
		//apply the background to the screen
		apply_surface(0,0,background,screen);
		
		apply_surface(640,0,background,screen);
		apply_surface(0,480,background,screen);
		apply_surface(640,480,background,screen);
		
		//apply the message to the screen
		apply_surface(180,140,message,screen);/*把message画面放置到screen画面上，位置是x偏移180，y偏移140*/
		
		//update the screen
		if(SDL_Flip(screen)==-1)/*调用SDL_Flip()来刷新屏幕，内存中的画面才会显示在屏幕上*/
		{
			return 1;
		}
		
		//wait 5 seconds
		SDL_Delay(5000);/*调用SDL_Delay()函数来避免屏幕一闪而过，SDL_Delay()参数是微妙，所以窗口会停留5000/1000=5秒*/
		
		//free the surfaces
		SDL_FreeSurface(message);
		SDL_FreeSurface(background);/*我们在程序结束时做清理工作。调用SDL_FreeSurface()来清除不再使用的画面。如果不释放内存，会导致内存泄露*/
		
		//Quit SDL
		SDL_Quit();
		
		//return 
		return 0;
		
	}
	
	

