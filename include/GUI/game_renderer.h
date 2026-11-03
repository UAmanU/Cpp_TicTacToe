#pragma once
#include "include/Tile/tile.h"
#include <array>
class GameRenderer
{
private:
    void print_grids();
    void print_tile(int index, Figure figure);

public:
    GameRenderer() = default;
    ~GameRenderer() = default;
    void print_field(const std::array<Tile, 9> &tiles);
};