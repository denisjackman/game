// Standard headers
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <cstring>
#include <cstdint>
#include <vector>
#include <list>
#include <string>

// Game Library headers
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

// custom headers
#include "gamefunction.h"
#include "SDLEngine.h"

using namespace std;


// Functions Code
bool GameInitialise()
{
    DebugModeInitialise();
    //Initialization flag
    bool result = true;
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        Print("ERROR:SDL could not initialize! SDL_Error: "+ string(SDL_GetError()));
        result = false;
    }
    else
    {
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			Print( "Warning: Linear texture filtering not enabled!" );
		}
		//Create window
        gWindow = SDL_CreateWindow( SCREEN_TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            Print("ERROR:Window could not be created! SDL_Error: "+ string(SDL_GetError()));
            result = false;
        }
        else
        {
            //Create renderer for window options are SDL_RENDERER_ACCELERATED to a SDL_RENDERER_SOFTWARE
            gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
            if( gRenderer == NULL )
            {
                Print( "Renderer could not be created! SDL Error: " + string(SDL_GetError()) );
                result = false;
            }
            else
            {
            	//Initialize renderer color

				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					Print( "SDL_image could not initialize! SDL_image Error: "+ string(IMG_GetError()) );
					result = false;
				}
			}
        }
    }

    return result;
}

void GameTerminate()
{
    //Deallocate surface
	SDL_DestroyTexture( gTexture );
	gTexture = NULL;

    //Destroy window
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
    gWindow = NULL;
  	gRenderer = NULL;

    //Quit SDL subsystems
    IMG_Quit();
    SDL_Quit();

    DebugModeTerminate();
}

SDL_Surface* loadSurface(string path)
{
    SDL_Surface* optimizedSurface = NULL;
    SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str() );
    if (loadedSurface == NULL)
    {
        Print("Unable to load image " + path + "! SDL Error: "+ string(IMG_GetError()));
    }
    else
    {
        optimizedSurface = SDL_ConvertSurface( loadedSurface, gScreenSurface -> format, NULL);
        if (optimizedSurface == NULL)
        {
            Print("Unable to optimize image " + path + "! SDL Error: "+ string(SDL_GetError()));
        }
   		SDL_FreeSurface( loadedSurface );
    }
    return optimizedSurface;
}

SDL_Texture* loadTexture( string path )
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		Print( "Unable to load image "+path+"! SDL_image Error: "+ string(IMG_GetError()) );
	}
	else
	{
		//Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			Print( "Unable to create texture from " + path  + " ! SDL Error: "+ string(SDL_GetError()) );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}

bool LoadMedia(string path)
{
    bool result = true;
	gTexture = loadTexture( path );
	if( gTexture == NULL )
	{
		Print( "Failed to load texture image!" );
        result = false;
	}
    return result;
}
