#include <stdio.h>
#include <SFML/Graphics.hpp>

#include "Player.h"
#include "PlayArea.h"

void draw_game_board(PlayArea& board, sf::RenderWindow& window)
{
    sf::RectangleShape main_board(sf::Vector2f(700.f, 600.f));
    main_board.setFillColor(sf::Color::Yellow);
    main_board.setPosition(sf::Vector2f(100.f, 50.f));
    window.draw(main_board);
    sf::CircleShape pieces[42];
    for (int i = 0; i < 42; i++) {
        int x = i % 7;
        int y = i / 7;
        pieces[i].setRadius(40.f);
        pieces[i].setFillColor(board.whose_piece(x, y));
        pieces[i].setPosition(sf::Vector2f(x*95.f + 125, y*95.f + 75));
        window.draw(pieces[i]);
    }
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(900.f, 700.f), "Connect 4");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        PlayArea game_board;

        window.clear();
        draw_game_board(game_board, window);
        window.display();
    }

    return 0;
}
