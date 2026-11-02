#pragma once
#include <array>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iostream>
#include <limits>
class TileError : public std::runtime_error
{
public:
    TileError(const std::string &message) : std::runtime_error(message) {}
};
enum class GameResult
{
    win,
    lose,
    draw
};
enum class Figure
{
    x = 'X',
    o = 'O',
    empty = '-'
};
namespace Config
{
    inline constexpr std::array<std::array<int, 3>, 8> win_conditions = {{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}}};
    inline constexpr std::array<int, 4> corners = {{0, 2, 6, 8}};
    inline constexpr std::array<int, 4> edges = {{1, 3, 5, 7}};
    inline constexpr int board_size = 3;
    inline constexpr int board_center = 4;
};
namespace Utils
{
    inline bool object_in_list(int object, const std::vector<int> &list)
    {
        return (std::find(list.begin(), list.end(), object) != list.end());
    }
    inline void clear_cin()
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}