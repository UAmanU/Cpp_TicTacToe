#pragma once
#include <string>
#include <array>
class ConfigManager
{
public:
    ConfigManager() = default;
    ~ConfigManager() = default;
    int get_window_width() const;
    int get_window_height() const;
    std::string get_window_title() const;
    bool get_window_resizable() const;
    int get_window_fps() const;

    char get_user_figure() const;
    bool get_user_goes_first() const;

    std::array<int, 9> get_win_conditions() const;
    int get_center_tile() const;
    std::array<int, 4> get_corners() const;
    std::array<int, 4> get_sides() const;

    std::array<int, 3> get_background_color() const;
    std::array<int, 3> get_line_color() const;
    std::array<int, 3> get_x_color() const;
    std::array<int, 3> get_o_color() const;
    std::array<int, 3> get_text_color() const;
    std::array<int, 3> get_grid_color() const;
};