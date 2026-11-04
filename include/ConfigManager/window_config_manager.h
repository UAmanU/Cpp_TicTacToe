#pragma once
#include "include/ConfigManager/config_manager.h"

class WindowConfigManager : public IConfigManager
{
public:
    using IConfigManager::IConfigManager;
    ~WindowConfigManager() = default;
    int get_window_width() const;
    int get_window_height() const;
    int get_window_fps() const;
    bool get_window_resizable() const;
    std::string get_window_title() const;
};