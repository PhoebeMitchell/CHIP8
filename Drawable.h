//
// Created by Phoebe Mitchell on 12/02/2023.
//

#ifndef CHIP8_DRAWABLE_H
#define CHIP8_DRAWABLE_H

#include "Window.h"

class Drawable {
public:
    virtual void DrawToWindow(Window *window) = 0;
};


#endif //CHIP8_DRAWABLE_H
