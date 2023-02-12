//
// Created by Phoebe Mitchell on 12/02/2023.
//

#ifndef CHIP8_WINDOW_H
#define CHIP8_WINDOW_H


#include <string>
#include <SFML/Graphics.hpp>

class Window {
public:
    const sf::Color CLEAR_COLOR = sf::Color::Black;

    Window(int width, int height, std::string name);

    bool IsOpen();
    void PollEvents();
    void Clear();
    void Draw(sf::Drawable *drawable);
    void Display();
private:
    sf::RenderWindow m_renderWindow;
};


#endif //CHIP8_WINDOW_H
