#include "TTT_game.h"
#include <memory>
#include "TTT_board.h"
#include "TTT_players.h"
#include "TTT_game.h"
#include "TTT_GUI.h"
#include "TTT_configInfo.hpp"
int main()
{
    greeting();
    Figure user_figure = choose_figure();
    Figure bot_figure = (user_figure == Figure::o ? Figure::x : Figure::o);
    std::shared_ptr<Board> board = std::make_unique<Board>(Config::board_size);
    std::unique_ptr<Player> user = std::make_unique<User>(user_figure);
    std::unique_ptr<Player> bot = std::make_unique<Bot>(bot_figure);
    std::unique_ptr<Game> game = std::make_unique<Game>(user, bot, std::move(board));
    GameResult result = game->game_loop();
    print_result(result);
    return 0;
}