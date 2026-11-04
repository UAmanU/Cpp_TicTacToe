#pragma once
#include "include/ConfigManager/config_manager.h"
#include "include/Tile/figure.h"
#include <array>

class GameConfigManager : public IConfigManager
{
public:
    using IConfigManager::IConfigManager;
    ~GameConfigManager() = default;
    int get_tile_size() const;
    int get_figure_size() const;
    std::array<std::array<int, 3>, 9> get_win_conditions() const;
    Figure get_user_figure() const;
    bool user_goes_first() const;
    int get_center_tile() const;
    std::array<int, 4> get_corner_tiles() const;
    std::array<int, 4> get_side_tiles() const;
};