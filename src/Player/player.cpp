
#include "include/Player/player.h"
Player::Player(const Figure figure) : chosen_figure(figure) {}
Player::~Player() {}
int Player::get_current_move() const
{
    return current_move;
}
Figure Player::get_figure() const
{
    return chosen_figure;
}
std::vector<int> Player::get_tiles() const
{
    return player_tiles;
}
