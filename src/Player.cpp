#include "Player.h"

Player::Player(sf::Color color)
{
    piece_color = color;
    cursor_position = 3;
}

void Player::set_color(sf::Color color)
{
    piece_color = color;
}

sf::Color Player::get_color()
{
    return piece_color;
}

void Player::cursor_posit_right()
{
    cursor_position += 1;
    if (cursor_position > 6) {
        cursor_position = 0;
    }
}

void Player::cursor_posit_left()
{
    cursor_position -= 1;
    if (cursor_position < 0) {
        cursor_position = 6;
    }
}

int Player::get_cursor_position()
{
    return cursor_position;
}