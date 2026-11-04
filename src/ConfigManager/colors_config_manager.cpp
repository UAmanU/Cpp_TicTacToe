#include "include/ConfigManager/colors_config_manager.h"
Color ColorsConfigManager::convert_rgb_to_color(const std::array<int, 3> &rgb) const
{
    return Color(rgb[0], rgb[1], rgb[2]);
}
Color ColorsConfigManager::get_background_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["background"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ColorsConfigManager::get_background_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["background"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ColorsConfigManager::get_x_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["X"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ColorsConfigManager::get_o_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["O"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ColorsConfigManager::get_text_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["text"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
Color ColorsConfigManager::get_grid_color() const
{
    std::array<int, 3> rgb = config_data["colors"]["grid"].get<std::array<int, 3>>();
    return convert_rgb_to_color(rgb);
}
