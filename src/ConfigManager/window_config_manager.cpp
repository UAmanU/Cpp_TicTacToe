#include "include/ConfigManager/window_config_manager.h"

int WindowConfigManager::get_window_width() const
{
    return config_data["window"]["width"].get<int>();
}
int WindowConfigManager::get_window_height() const
{
    return config_data["window"]["height"].get<int>();
}
std::string WindowConfigManager::get_window_title() const
{
    return config_data["window"]["title"].get<std::string>();
}
bool WindowConfigManager::get_window_resizable() const
{
    return config_data["window"]["cursor_enabled"].get<bool>();
}
int WindowConfigManager::get_window_fps() const
{
    return config_data["window"]["FPS"].get<int>();
}