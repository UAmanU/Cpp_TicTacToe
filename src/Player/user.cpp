#include "include/Player/user.h"
User::User(const Figure figure) : Player(figure) {}
void User::set_current_move(int tile_index)
{
    if (tile_index > 0)
        current_move = tile_index;
};
bool User::make_turn(Board &board)
{
    {
        current_move--;
        if (current_move < 0 || current_move > 8 || !(Utils::object_in_list(current_move, board.get_free_tiles())))
        {
            throw TileError("Tile must be greater than greater than 0 and lower than 10!");
        }
        else
        {
            board.place_tile(current_move, chosen_figure);
            player_tiles.push_back(current_move);
        }
    }

    if (board.check_win(player_tiles))
    {
        return true;
    }
    return false;
}