#pragma once
#include "include/Tile/tile.h"
#include "include/ConfigManager/colors_config_manager.h"
#include <array>
#include <memory>
class GameRenderer
{
private:
    std::unique_ptr<ColorsConfigManager> colors_config_manager;
    void print_grids();
    void print_tile(int index, Figure figure);

public:
    GameRenderer(std::unique_ptr<ColorsConfigManager> colors_config_manager);
    ~GameRenderer() = default;
    void print_field(const std::array<Tile, 9> &tiles);
};