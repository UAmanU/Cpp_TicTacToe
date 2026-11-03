#pragma once
#include <string>
#include <array>
#include <json.hpp>
#include <raylib.h>
class ConfigManager
{
private:
    std::string filename = "ConfigSettings.json";
    nlohmann::json config_data;
    Color convert_rgb_to_color(const std::array<int, 3> &rgb) const;

public:
    ConfigManager() = default;
    ~ConfigManager() = default;
    void load();
    void save();
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
    Color get_background_color() const;
    Color get_x_color() const;
    Color get_o_color() const;
    Color get_text_color() const;
    Color get_grid_color() const;
};