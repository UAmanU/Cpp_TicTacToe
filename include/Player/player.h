#pragma once
#include <vector>
#include <memory>
#include "include/board.h"

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
    virtual bool make_turn(Board &board) = 0;
    Figure get_figure() const;
    std::vector<int> get_tiles() const;
    int get_current_move() const;
};
