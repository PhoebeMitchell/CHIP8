//
// Created by Phoebe Mitchell on 12/02/2023.
//

#include "../Window.h"

Window::Window(int width, int height, std::string name) : m_renderWindow(sf::VideoMode(width, height), name){

}

bool Window::IsOpen() {
    return m_renderWindow.isOpen();
}

void Window::PollEvents() {
    sf::Event event;
    while (m_renderWindow.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::EventType::Closed:
                m_renderWindow.close();
                break;
        }
    }
}

void Window::Clear() {
    m_renderWindow.clear(CLEAR_COLOR);
}

void Window::Draw(sf::Drawable *drawable) {
    m_renderWindow.draw(*drawable);
}

void Window::Display() {
    m_renderWindow.display();
}
