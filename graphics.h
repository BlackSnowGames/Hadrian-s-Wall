/*********************************************************************************
* Hadrian's Wall
* Development Start: 4/20/2016
* Development Finish:
* ALL RIGHTS RESERVED (C) 2016 BLACKSNOW GAMES
* ********************************************************************************
* File:         graphics.h
* Author:       Noah Yost
* Date:         4/20/2016
* Description:  Class dedicated to drawing the Game Window
*               Resolution is 640 x 480 pixels
**********************************************************************************/
#ifndef _GRAPHICS_
#define _GRAPHICS_

struct SDL_Window;
struct SDL_Renderer

class Graphics
{
public:
    Graphics();
    ~Graphics();
pricate:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
};
#endif // GRAPHICS
