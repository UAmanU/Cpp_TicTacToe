#pragma once
#include <memory>
#include "include/Player/player.h"
#include "include/Board/board.h"
class Game
{
private:
    std::unique_ptr<Player> user;
    std::unique_ptr<Player> bot;
    std::unique_ptr<Board> board;

public:
    Game(std::unique_ptr<Player> &user, std::unique_ptr<Player> &bot, const std::unique_ptr<Board> &board);
    ~Game() = default;
    void game_loop();
};