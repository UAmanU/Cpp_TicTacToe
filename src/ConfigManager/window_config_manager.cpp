#include "include/ConfigManager/window_config_manager.h"

int WindowConfigManager::get_window_width() const
{
    return config_data["width"].get<int>();
}
int WindowConfigManager::get_window_height() const
{
    return config_data["height"].get<int>();
}
std::string WindowConfigManager::get_window_title() const
{
    return config_data["title"].get<std::string>();
}
bool WindowConfigManager::get_window_resizable() const
{
    return config_data["cursor_enabled"].get<bool>();
}
int WindowConfigManager::get_window_fps() const
{
    return config_data["FPS"].get<int>();
}