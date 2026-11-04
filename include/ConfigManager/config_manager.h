#pragma once
#include <string>
#include <array>
#include <json.hpp>
#include <raylib.h>
class IConfigManager
{
protected:
    std::string filename;
    nlohmann::json config_data;

public:
    IConfigManager(const std::string &filename);
    virtual ~IConfigManager() = default;
    void load();
};