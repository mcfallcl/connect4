#include "PlayArea.h"

PlayArea::PlayArea()
{
    clear_board();
}

bool PlayArea::add_piece(Player player, int column)
{
    int index = (column < 0) ? column * -1 % 7 : column % 7;

    while (index < 42) {
        if (board_state[index] == empty_color) {
            board_state[index] = player.get_color();
            return true;
        }
        index += 7;
    }

    return false;
}

void PlayArea::clear_board()
{
    std::fill(board_state, board_state+42, empty_color);
}

sf::Color PlayArea::whose_piece(int index)
{
    return board_state[index];
}

sf::Color PlayArea::whose_piece(int column, int row)
{
    if (column < 0 || column >= 7 || row < 0 || row >= 6) {
        return empty_color;
    }
    return board_state[row * 7 + column];
}