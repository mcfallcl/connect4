#ifndef _PLAYER_H
#define _PLAYER_H

#include <SFML/Graphics.hpp>

class Player {
    public:
        Player(sf::Color color=sf::Color::White);
        ~Player() {}
        void set_color(sf::Color color);
        sf::Color get_color();
        void cursor_posit_right();
        void cursor_posit_left();
        int get_cursor_position();
    private:
        sf::Color piece_color;
        int cursor_position;
};

#endif //_PLAYER_H