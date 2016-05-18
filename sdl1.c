/*
SDL
二、配置

sudo apt-get install libsdl1.2-dev

附加包：

sudo apt-get install libsdl-image1.2-dev

sudo apt-get install libsdl-mixer1.2-dev

sudo apt-get install libsdl-ttf2.0-dev

sudo apt-get install libsdl-gfx1.2-dev


gcc main.c -o main -lSDL

http://sdl.beuc.net/sdl.wiki/SDL_BlitSurface

SDL_BlitSurface -- This performs a fast blit from the source surface to the destination surface.

#include "SDL.h"

int SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect);
*/
#include <SDL/SDL.h>
int main(int argc,char* args[])
{
	SDL_Surface* hello = NULL;
	SDL_Surface* screen = NULL;
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(640,480,32,SDL_SWSURFACE);
	hello = SDL_LoadBMP("hello.bmp");
	SDL_BlitSurface(hello,NULL,screen,NULL);
	SDL_Flip(screen);
	SDL_Delay(5000);
	SDL_FreeSurface(hello);
	SDL_Quit();
	
	
return 0;
}
