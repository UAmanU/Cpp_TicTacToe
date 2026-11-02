#pragma once
#include "include/Player/player.h"
class User : public Player
{
public:
    User(const Figure figure);
    void set_current_move(const int tile_index) override;
    size_t make_turn() override;
};