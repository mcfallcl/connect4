#ifndef __PLAY_AREA_H
#define __PLAY_AREA_H

#include "Player.h"

class PlayArea {
    public:
        PlayArea();
        ~PlayArea() {};
        bool add_piece(Player player, int column);
        void clear_board();
        sf::Color whose_piece(int index);
        sf::Color whose_piece(int column, int row);
    private:
        sf::Color board_state[42];
        const sf::Color empty_color = sf::Color::White;
};

#endif //__PLAY_AREA_H
