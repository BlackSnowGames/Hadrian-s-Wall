/*********************************************************************************
* Hadrian's Wall
* Development Start: 4/20/2016
* Development Finish:
* ALL RIGHTS RESERVED (C) 2016 BLACKSNOW GAMES
* ********************************************************************************
* File:         graphics.cpp
* Author:       Noah Yost
* Date:         4/20/2016
* Description:  Implementation of graphics.h
**********************************************************************************/

// ----- Includes -----
#include "SDL2/SDL.h"
#include "graphics.h"

/*
==================================================================================
Graphics

Holds all information dealing with graphics in the game
==================================================================================
*/
Graphics::Graphics()
{
  SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer);
  SDL_SetWindowTitle(this->_window, "Hadrian's Wall");
}

Graphics::~Graphics()
{
  SDL_DestroyWindow(this->_window);
}
