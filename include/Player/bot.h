#pragma once
#include "include/Player/player.h"
class Bot : public Player
{
public:
    Bot(const Figure figure);
    int choose_tile(Board &board);
    void set_current_move(const int tile_index) override;
    int find_key_tile(Board &board) const;
    bool make_turn(Board &board) override;
};