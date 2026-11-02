#pragma once
#include <memory>
#include "include/ConfigManager/config_manager.h"
#include "include/Game/game.h"
class ProgrammLauncher
{
private:
    std::unique_ptr<ConfigManager> config_manager;
    std::unique_ptr<Game> game;
    void prepare();

public:
    ProgrammLauncher(std::unique_ptr<ConfigManager> config_manager);
    ~ProgrammLauncher() = default;
    void start();
};