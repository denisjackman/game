#ifndef SDLENGINE_H
#define SDLENGINE_H

using namespace std;

typedef struct customcolour
{
    char    *name;
    int     red;
    int     green;
    int     blue;
};

// Variables
extern int             SCREEN_WIDTH;
extern int             SCREEN_HEIGHT;
extern char            *SCREEN_TITLE;
extern int             PROGRAM_TIMER;
extern char            *VERSION;
extern char            *NAME_PROGRAM;
extern string          MEDIAFILE;
extern SDL_Window*     gWindow;
extern SDL_Surface*    gScreenSurface;
extern SDL_Surface*    gDisplaySurface;
extern SDL_Surface*    gStretchedSurface;
extern SDL_Renderer*   gRenderer;
extern SDL_Texture*    gTexture;

extern customcolour Snow;
extern customcolour Green;
extern customcolour Snow_2;
extern customcolour Snow_3;
extern customcolour Snow_4;
extern customcolour Ghost_White;
extern customcolour White_Smoke;
extern customcolour Gainsboro;
extern customcolour Floral_White;
extern customcolour Old_Lace;
extern customcolour Linen;
extern customcolour Antique_White;
extern customcolour Antique_White_2;
extern customcolour Antique_White_3;
extern customcolour Antique_White_4;
extern customcolour Papaya_Whip;
extern customcolour Blanched_Almond;
extern customcolour Bisque;
extern customcolour Bisque_2;
extern customcolour Bisque_3;
extern customcolour Bisque_4;
extern customcolour Peach_Puff;
extern customcolour Peach_Puff_2;
extern customcolour Peach_Puff_3;
extern customcolour Peach_Puff_4;
extern customcolour Navajo_White;
extern customcolour Moccasin;
extern customcolour Cornsilk;
extern customcolour Cornsilk_2;
extern customcolour Cornsilk_3;
extern customcolour Cornsilk_4;
extern customcolour Ivory;
extern customcolour Ivory_2;
extern customcolour Ivory_3;
extern customcolour Ivory_4;
extern customcolour Lemon_Chiffon;
extern customcolour Seashell;
extern customcolour Seashell_2;
extern customcolour Seashell_3;
extern customcolour Seashell_4;
extern customcolour Honeydew;
extern customcolour Honeydew_2;
extern customcolour Honeydew_3;
extern customcolour Honeydew_4;
extern customcolour Mint_Cream;
extern customcolour Azure;
extern customcolour Alice_Blue;
extern customcolour Lavender;
extern customcolour Lavender_Blush;
extern customcolour Misty_Rose;
extern customcolour White;
extern customcolour Black;
extern customcolour Dark_Slate_Gray;
extern customcolour Dim_Gray;
extern customcolour Slate_Gray;
extern customcolour Light_Slate_Gray;
extern customcolour Gray;
extern customcolour Light_Gray;
extern customcolour Midnight_Blue;
extern customcolour Navy;
extern customcolour Cornflower_Blue;
extern customcolour Dark_Slate_Blue;
extern customcolour Slate_Blue;
extern customcolour Medium_Slate_Blue;
extern customcolour Light_Slate_Blue;
extern customcolour Medium_Blue;
extern customcolour Royal_Blue;
extern customcolour Blue;
extern customcolour Dodger_Blue;
extern customcolour Deep_Sky_Blue;
extern customcolour Sky_Blue;
extern customcolour Light_Sky_Blue;
extern customcolour Steel_Blue;
extern customcolour Light_Steel_Blue;
extern customcolour Light_Blue;
extern customcolour Powder_Blue;
extern customcolour Pale_Turquoise;
extern customcolour Dark_Turquoise;
extern customcolour Medium_Turquoise;
extern customcolour Turquoise;
extern customcolour Cyan;
extern customcolour Light_Cyan;
extern customcolour Cadet_Blue;
extern customcolour Medium_Aquamarine;
extern customcolour Aquamarine;
extern customcolour Dark_Green;
extern customcolour Dark_Olive_Green;
extern customcolour Dark_Sea_Green;
extern customcolour Sea_Green;
extern customcolour Medium_Sea_Green;
extern customcolour Light_Sea_Green;
extern customcolour Pale_Green;
extern customcolour Spring_Green;
extern customcolour Lawn_Green;
extern customcolour Chartreuse;
extern customcolour Medium_Spring_Green;
extern customcolour Green_Yellow;
extern customcolour Lime_Green;
extern customcolour Yellow_Green;
extern customcolour Forest_Green;
extern customcolour Olive_Drab;
extern customcolour Dark_Khaki;
extern customcolour Khaki;
extern customcolour Pale_Goldenrod;
extern customcolour Light_Goldenrod_Yellow;
extern customcolour Light_Yellow;
extern customcolour Yellow;
extern customcolour Gold;
extern customcolour Light_Goldenrod;
extern customcolour Goldenrod;
extern customcolour Dark_Goldenrod;
extern customcolour Rosy_Brown;
extern customcolour Indian_Red;
extern customcolour Saddle_Brown;
extern customcolour Sienna;
extern customcolour Peru;
extern customcolour Burlywood;
extern customcolour Beige;
extern customcolour Wheat;
extern customcolour Sandy_Brown;
extern customcolour Tan;
extern customcolour Chocolate;
extern customcolour Firebrick;
extern customcolour Brown;
extern customcolour Dark_Salmon;
extern customcolour Salmon;
extern customcolour Light_Salmon;
extern customcolour Orange;
extern customcolour Dark_Orange;
extern customcolour Coral;
extern customcolour Light_Coral;
extern customcolour Tomato;
extern customcolour Orange_Red;
extern customcolour Red;
extern customcolour Hot_Pink;
extern customcolour Deep_Pink;
extern customcolour Pink;
extern customcolour Light_Pink;
extern customcolour Pale_Violet_Red;
extern customcolour Maroon;
extern customcolour Medium_Violet_Red;
extern customcolour Violet_Red;
extern customcolour Violet;
extern customcolour Plum;
extern customcolour Orchid;
extern customcolour Medium_Orchid;
extern customcolour Dark_Orchid;
extern customcolour Dark_Violet;
extern customcolour Blue_Violet;
extern customcolour Purple;
extern customcolour Medium_Purple;
extern customcolour Thistle;
extern customcolour colourlist[152];


// Function Headers
bool GameInitialise();
void GameTerminate();
SDL_Surface* loadSurface(string path);
SDL_Texture* loadTexture( string path );
bool LoadMedia(string path);
void ClearScreen(customcolour col);
void PlotPixel( int x, int y, customcolour col);
void DrawRect( int dx, int dy, int width , int height, customcolour colour, bool fill = false);
void DrawLine(int ox, int oy, int tx, int ty, customcolour colour);
#endif