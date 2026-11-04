#include "include/ConfigManager/game_config_manager.h"
Figure GameConfigManager::get_user_figure() const
{
    char symbol = config_data["user"]["figure"].get<std::string>()[0];
    return convert_char_to_figure(symbol);
}
bool GameConfigManager::user_goes_first() const
{
    return config_data["user"]["goes_first"].get<bool>();
}
int GameConfigManager::get_tile_size() const
{
    return config_data["game"]["tile_size"].get<int>();
}
int GameConfigManager::get_figure_size() const
{
    return config_data["game"]["figure_size"].get<int>();
}
std::array<std::array<int, 3>, 9> GameConfigManager::get_win_conditions() const
{
    return config_data["game"]["win_conditions"].get<std::array<std::array<int, 3>, 9>>();
}
int GameConfigManager::get_center_tile() const
{
    return config_data["game"]["center_tile"].get<int>();
}
std::array<int, 4> GameConfigManager::get_corner_tiles() const
{
    return config_data["game"]["corner_tiles"].get<std::array<int, 4>>();
}
std::array<int, 4> GameConfigManager::get_side_tiles() const
{
    return config_data["game"]["side_tiles"].get<std::array<int, 4>>();
}