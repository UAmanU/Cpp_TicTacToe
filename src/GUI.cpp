#include "TTT_GUI.h"
#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include "TTT_configInfo.hpp"
void show_board(const std::vector<Figure> &tiles)
{
    for (int i = 0; i < tiles.size(); i += 3)
    {
        std::cout << "\n";
        std::cout << static_cast<char>(tiles[i]) << " | " << static_cast<char>(tiles[i + 1]) << " | " << static_cast<char>(tiles[i + 2]) << "\n";
        if (i < 6)
            std::cout << std::string(9, '_');
    }
}
int choose_tile()
{
    int choice;
    while (true)
    {
        std::cout << "Choose your tile: " << std::endl;
        if (!(std::cin >> choice))
        {
            std::cout << "Only numbers.\n";
            Utils::clear_cin();
            continue;
        }
        break;
    }
    return choice;
}
Figure choose_figure()
{
    char choice;
    while (true)
    {
        std::cout << "Choose your figure: X or O?\n";
        if (!(std::cin >> choice))
        {
            std::cout << "Only chars!\n";
            Utils::clear_cin();
            continue;
        }
        choice = std::toupper(choice);
        switch (choice)
        {
        case 'X':
            return Figure::x;
        case 'O':
            return Figure::o;
        default:
            std::cout << "Only O or X.\n";
            continue;
        }
        return Figure::empty;
    }
}
void print_result(GameResult &result)
{
    if (result == GameResult::win)
    {
        std::cout << "Congratulations, you won!\n";
    }
    else if (result == GameResult::lose)
    {
        std::cout << "Oh no, you lost!\n";
    }
    else
    {
        std::cout << "Wow! This is a draw!\n";
    }
}
void print_error(const TileError &e)
{
    std::cout << "Oops! Theres an error: " << e.what() << '\n';
};
void greeting()
{
    std::cout << "Hello! This is a TicTacToe refactoring.\n";
}
