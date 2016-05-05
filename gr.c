#include<SDL/SDL.h>
#include<stdlib.h> 
int main(  ) 
{ 
          SDL_Surface *screen;
	
	if(SDL_Init(SDL_INIT_EVERYTHING)<0){
		//fprintf(stderr,"rerrorrrr",SDL_GetError());
		printf(" init fail.....\n");
		exit(1);
	}
	screen = SDL_SetVideoMode(400,400,16,SDL_SWSURFACE);
	if(screen == NULL){
		//fprintf(stderr,"wwwwww",SDL_GetError());
                    printf("window init fail.....\n");
		exit(1);
	}
	         printf("window init ok.....\n");
	atexit(SDL_Quit);
	
	Uint32 color;

		color=SDL_MapRGB(screen->format,255,0,0);
                    SDL_FillRect(screen,NULL,color);
                    SDL_UpdateRect(screen,0,0,0,0);
	

	
	//SDL_Delay(5000);
	return 0;   
} 
