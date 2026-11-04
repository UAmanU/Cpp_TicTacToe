#pragma once
#include "include/ConfigManager/config_manager.h"

class ColorsConfigManager : public IConfigManager
{
private:
    Color convert_rgb_to_color(const std::array<int, 3> &rgb) const;

public:
    using IConfigManager::IConfigManager;
    ~ColorsConfigManager() = default;
    Color get_background_color() const;
    Color get_o_color() const;
    Color get_x_color() const;
    Color get_text_color() const;
    Color get_grid_color() const;
};