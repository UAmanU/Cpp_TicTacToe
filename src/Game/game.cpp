#include "include/Game/game.h"
Game::Game(std::unique_ptr<Player> user, std::unique_ptr<Player> bot, std::unique_ptr<Board> board, std::unique_ptr<GameRenderer> game_renderer, std::unique_ptr<GameConfigManager> game_config_manager) : user(std::move(user)), bot(std::move(bot)), board(std::move(board)), game_renderer(std::move(game_renderer)), game_config_manager(std::move(game_config_manager)) {};
