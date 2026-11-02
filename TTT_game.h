#pragma once
#include <memory>
#include "TTT_players.h"
#include "TTT_board.h"
class Game
{
private:
    std::unique_ptr<Player> user;
    std::unique_ptr<Player> bot;
    std::shared_ptr<Board> board;

public:
    Game(std::unique_ptr<Player> &user, std::unique_ptr<Player> &bot, const std::shared_ptr<Board> &board);
    ~Game() = default;
    GameResult game_loop();
};