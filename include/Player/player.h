#pragma once
#include <vector>
#include <memory>
#include "TTT_Board.h"
#include "TTT_configInfo.hpp"
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

class User : public Player
{
public:
    User(const Figure figure);
    void set_current_move(const int tile_index) override;
    bool make_turn(Board &board) override;
};
class Bot : public Player
{
public:
    Bot(const Figure figure);
    int choose_tile(Board &board);
    void set_current_move(const int tile_index) override;
    int find_key_tile(Board &board) const;
    bool make_turn(Board &board) override;
};