#pragma once
#include <array>
#include <vector>
#include "include/Board/figure.h"
class Board
{
private:
    std::vector<Figure> tiles = std::vector<Figure>(9, Figure::empty);

    std::vector<int> free_tiles = {0, 1, 2, 3, 4, 5, 6, 7, 8};

public:
    Board(const int board_size);
    ~Board() = default;
    std::vector<int> get_free_tiles() const;
    std::vector<Figure> get_tiles() const;
    bool is_tile_free(const int &tile) const;
    bool has_free_tiles() const;
    bool check_win(const std::vector<int> &player_tiles);
    void place_tile(const int &index, const Figure figure);
};