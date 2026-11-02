#pragma once
#include <vector>
#include "TTT_configInfo.hpp"
void show_board(const std::vector<Figure> &tiles);
int choose_tile();
Figure choose_figure();
void print_result(GameResult &result);
void print_error(const TileError &e);
void greeting();