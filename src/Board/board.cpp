
#include <string>
#include <vector>
#include "include/Board/board.h"
#include "include/Utils/utils.h"
#include <algorithm>
Board::Board(const std::vector<Tile> &tiles) : tiles(tiles) {};
std::vector<Tile> Board::get_tiles() const
{
    return tiles;
}
std::vector<int> Board::get_free_tiles() const
{
    return free_tiles;
}
bool Board::is_tile_free(int tile) const
{
    return Utils::number_in_list(tile, free_tiles);
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
        if (Utils::number_in_list(win_condition[0], player_tiles) && Utils::number_in_list(win_condition[1], player_tiles) && Utils::object_in_list(win_condition[2], player_tiles))
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
void Board::place_tile(int index, Figure figure)
{
    if (Utils::number_in_list(index, free_tiles))
    {
        tiles.at(index).figure = figure;
        auto tile_ptr = std::find(free_tiles.begin(), free_tiles.end(), index);
        if (tile_ptr != free_tiles.end())
        {
            free_tiles.erase(tile_ptr);
        }
    }
}