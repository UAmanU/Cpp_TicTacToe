#pragma once
#include "include/Player/player.h"
class User : public Player
{
public:
    User(const Figure figure);
    void set_current_move(const int tile_index) override;
    bool make_turn(Board &board) override;
};