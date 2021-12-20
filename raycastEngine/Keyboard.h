#pragma once

#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

#include <array>
class Keyboard {
    public:
        Keyboard();

        
        void update(sf::Event e);
        bool isKeyDown(sf::Keyboard::Key key) const;

    private:
        void resetKeys();

        std::array<bool, sf::Keyboard::KeyCount> m_keys;
};