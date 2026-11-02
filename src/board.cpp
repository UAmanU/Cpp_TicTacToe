
#include <string>
#include <vector>
#include "include/board.h"
Board::Board(const int board_size) : board_size(board_size * 3)
{
}
std::vector<Figure> Board::get_tiles() const
{
    return tiles;
}
std::vector<int> Board::get_free_tiles() const
{
    return free_tiles;
}
bool Board::is_tile_free(const int &tile) const
{
    return Utils::object_in_list(tile, free_tiles);
}
bool Board::has_free_tiles() const
{
    return !(free_tiles.empty());
}
bool Board::check_win(const std::vector<int> &player_tiles)
{
    bool is_win = false;
    for (const auto &win_condition : win_conditions)
    {
        if (Utils::object_in_list(win_condition[0], player_tiles) && Utils::object_in_list(win_condition[1], player_tiles) && Utils::object_in_list(win_condition[2], player_tiles))
        {
            is_win = true;
        }
        else
        {
            continue;
        }
    }
    return is_win;
}
void Board::place_tile(const int &index, const Figure figure)
{
    if (Utils::object_in_list(index, free_tiles))
    {
        tiles.at(index) = figure;
        auto tile_ptr = std::find(free_tiles.begin(), free_tiles.end(), index);
        if (tile_ptr != free_tiles.end())
        {
            free_tiles.erase(tile_ptr);
        }
    }
}