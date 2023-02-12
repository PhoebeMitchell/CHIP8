//
// Created by Phoebe Mitchell on 12/02/2023.
//

#include "../Surface.h"

Surface::Surface(int width, int height, int x, int y, sf::Color offColor, sf::Color onColor) {
    m_offColor = offColor;
    m_onColor = onColor;
    m_sprite.setPosition(x, y);

    m_image.create(width, height, offColor);
    m_texture.loadFromImage(m_image);
    m_sprite.setTexture(m_texture);
}

void Surface::SetPixelActive(int x, int y, bool isActive) {
    m_image.setPixel(x, y, isActive ? m_onColor : m_offColor);
    m_texture.loadFromImage(m_image);
}

void Surface::DrawToWindow(Window *window) {
    window->Draw(&m_sprite);
}
