#pragma once
#include <memory>
#include "include/Game/game_result.h"
#include "include/Player/player.h"
#include "include/Board/board.h"
#include "include/GUI/game_renderer.h"
#include "include/ConfigManager/game_config_manager.h"
class Game
{
private:
    std::unique_ptr<Player> user;
    std::unique_ptr<Player> bot;
    std::unique_ptr<Board> board;
    std::unique_ptr<GameRenderer> game_renderer;
    std::unique_ptr<GameConfigManager> game_config_manager;

public:
    Game(std::unique_ptr<Player> user, std::unique_ptr<Player> bot, std::unique_ptr<Board> board, std::unique_ptr<GameRenderer> game_renderer, std::unique_ptr<GameConfigManager> game_config_manager);
    ~Game() = default;
    void update();
    GameResult get_game_result() const;
    bool game_should_continue() const;
    void draw();
};