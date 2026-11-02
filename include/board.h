#pragma once
#include <array>
#include <vector>
#include "TTT_configInfo.hpp"
class Board
{
private:
    std::vector<Figure> tiles = std::vector<Figure>(9, Figure::empty);
    std::array<std::array<int, 3>, 8> win_conditions = Config::win_conditions;
    std::vector<int> free_tiles = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    std::array<int, 4> corners = Config::corners;
    std::array<int, 4> edges = Config::edges;
    int board_size;

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