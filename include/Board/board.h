#pragma once
#include <array>
#include <vector>
#include "include/Tile/tile.h"
class Board
{
private:
    std::vector<Tile> tiles;

    std::vector<int> free_tiles = {0, 1, 2, 3, 4, 5, 6, 7, 8};

public:
    Board(const std::vector<Tile> &tiles);
    ~Board() = default;
    std::vector<int> get_free_tiles() const;
    std::vector<Tile> get_tiles() const;
    bool is_tile_free(int tile) const;
    bool has_free_tiles() const;
    bool check_win(const std::vector<int> &player_tiles);
    void place_tile(int index, Figure figure);
};