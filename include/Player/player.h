#pragma once
#include <vector>
#include <memory>
#include "include/Tile/figure.h"

class Player
{
protected:
    std::vector<int> player_tiles;
    Figure chosen_figure;
    int current_move;

public:
    Player(const Figure figure);
    virtual ~Player();
    virtual void set_current_move(int tile_index) = 0;
    virtual size_t make_turn() = 0;
    Figure get_figure() const;
    std::vector<int> get_tiles() const;
    int get_current_move() const;
};
