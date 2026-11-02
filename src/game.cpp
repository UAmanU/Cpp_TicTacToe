#include <iostream>
#include "TTT_game.h"
#include "TTT_configInfo.hpp"
#include "TTT_GUI.h"
#include <memory>
#include "TTT_players.h"
Game::Game(std::unique_ptr<Player> &user, std::unique_ptr<Player> &bot, const std::shared_ptr<Board> &board) : user(std::move(user)), bot(std::move(bot)), board(board) {};
GameResult Game::game_loop()
{
    bool priority = (user->get_figure() == Figure::o ? true : false);
    while (true)
    {
        try
        {
            if (priority)
            {
                show_board(board->get_tiles());
                int move = choose_tile();
                user->set_current_move(move);
                if ((user->make_turn(*board)))
                {
                    return GameResult::win;
                }
                priority = false;
            }
            else
            {
                if ((bot->make_turn(*board)))
                {
                    return GameResult::lose;
                }
                priority = true;
            }
            if (!board->has_free_tiles())
            {
                if (!(board->check_win(user->get_tiles()) || board->check_win(bot->get_tiles())))
                {
                    return GameResult::draw;
                }
            }
        }
        catch (const TileError &e)
        {
            print_error(e);
        }
    }
}
