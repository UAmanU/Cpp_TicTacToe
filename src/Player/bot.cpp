#include "include/Player/bot.h"
Bot::Bot(const Figure figure) : Player(figure) {}
void Bot::set_current_move(int tile_index)
{
    if (tile_index != -1)
        current_move = tile_index;
}

int Bot::find_key_tile(Board &board) const
{
    auto free_tiles = board.get_free_tiles();
    auto win_conditions = Config::win_conditions;
    for (const auto &win_condition : win_conditions)
    {
        int self_count = 0;
        int opponent_count = 0;
        for (const int tile : win_condition)
        {
            if (Utils::object_in_list(tile, player_tiles))
            {
                self_count++;
            }
            if (Figure tile_state = board.get_tiles().at(tile); tile_state != Figure::empty && tile_state != chosen_figure)
            {
                opponent_count++;
            }
            for (const int count : {self_count, opponent_count})
            {
                if (count == 2)
                {
                    if (Utils::object_in_list(tile, free_tiles))
                    {
                        return tile;
                    }
                }
            }
        }
    }
    return -1;
}
int Bot::choose_tile(Board &board)
{
    auto free_tiles = board.get_free_tiles();
    auto win_conditions = Config::win_conditions;
    if (int result = find_key_tile(board); result == -1)
    {
        if (Utils::object_in_list(Config::board_center, free_tiles))
        {
            return Config::board_center;
        }
        for (const std::array vector : {Config::corners, Config::edges})
        {
            for (const int corner : Config::corners)
            {
                if (Utils::object_in_list(corner, free_tiles))
                {
                    return corner;
                }
            }
        }
    }
    else
    {
        return result;
    }
    return -1;
}
bool Bot::make_turn(Board &board)
{
    if (board.has_free_tiles())
    {
        int bot_move;
        int tile_index = choose_tile(board);
        if (tile_index != -1)
        {
            set_current_move(tile_index);
            board.place_tile(current_move, chosen_figure);
            player_tiles.push_back(current_move);
            if (board.check_win(player_tiles))
            {
                return true;
            }
        }
    }
    return false;
}
