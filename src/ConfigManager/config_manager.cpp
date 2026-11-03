#include "include/ConfigManager/config_manager.h"
#include <fstream>
#include "include/Errors/json_error.h"
using json = nlohmann::json;
void ConfigManager::load()
{
    std::ifstream file(filename);
    if (!(file.is_open()))
    {
        throw JsonError("don't have rights to open " + filename + " file.");
    }
    try
    {

        file >> config_data;
    }
    catch (const json::parse_error &e)
    {
        if (file.peek() == std::ifstream::traits_type::eof())
        {
            config_data = json::object();
        }
        throw JsonError("Cannot connect to " + filename + " file.");
    }
}
void ConfigManager::save()
{
    std::ofstream file(filename);
    if (!(file.is_open()))
    {
        throw JsonError("don't have rights to open " + filename + " file.");
    }
    try
    {

        file << config_data;
    }
    catch (const json::parse_error &e)
    {
        throw JsonError("Cannot connect to " + filename + " file.");
    }
}
int ConfigManager::get_window_width() const
{
    return config_data["window"]["width"].get<int>();
}
int ConfigManager::get_window_height() const
{
    return config_data["window"]["height"].get<int>();
}
std::string ConfigManager::get_window_title() const
{
    return config_data["window"]["title"].get<std::string>();
}
bool ConfigManager::get_window_resizable() const
{
    return config_data["window"]["cursor_enabled"].get<bool>();
}
int ConfigManager::get_window_fps() const
{
    return config_data["window"]["FPS"].get<int>();
}
char ConfigManager::get_user_figure() const
{
    return config_data["user"]["figure"].get<std::string>()[0];
}
bool ConfigManager::get_user_goes_first() const
{
    return config_data["user"]["goes_first"].get<bool>();
}
std::array<int, 9> ConfigManager::get_win_conditions() const
{
    return config_data["game"]["win_conditions"].get<std::array<int, 9>>();
}
int ConfigManager::get_center_tile() const
{
    return config_data["game"]["center_tile"].get<int>();
}
std::array<int, 4> ConfigManager::get_corners() const
{
    return config_data["game"]["corner_tiles"].get<std::array<int, 4>>();
}
std::array<int, 4> ConfigManager::get_sides() const
{
    return config_data["game"]["side_tiles"].get<std::array<int, 4>>();
}
Color ConfigManager::convert_rgb_to_color(const std::array<int, 3> &rgb) const
{
    return Color(rgb[0], rgb[1], rgb[2]);
}
Color ConfigManager::get_background_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["background"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ConfigManager::get_background_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["background"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ConfigManager::get_x_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["X"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ConfigManager::get_o_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["O"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ConfigManager::get_text_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["text"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ConfigManager::get_grid_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["grid"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
