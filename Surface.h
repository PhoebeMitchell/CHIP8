//
// Created by Phoebe Mitchell on 12/02/2023.
//

#ifndef CHIP8_SURFACE_H
#define CHIP8_SURFACE_H


#include <SFML/Graphics.hpp>
#include "Drawable.h"

class Surface : public Drawable {
public:
    Surface(int width, int height, int x, int y, sf::Color offColor, sf::Color onColor);

    void SetPixelActive(int x, int y, bool isActive);
    void DrawToWindow(Window *window) override;
private:
    sf::Color m_offColor;
    sf::Color m_onColor;
    sf::Image m_image;
    sf::Texture m_texture;
    sf::Sprite m_sprite;

    void UpdateSprite();
};


#endif //CHIP8_SURFACE_H
