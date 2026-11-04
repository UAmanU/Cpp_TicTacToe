#include "include/ConfigManager/config_manager.h"
#include <fstream>
#include "include/Errors/json_error.h"
using json = nlohmann::json;
IConfigManager::IConfigManager(const std::string &filename) : filename(filename) {};
void IConfigManager::load()
{
    std::ifstream file(filename);
    if (!(file.is_open()))
    {
        throw JsonError("don't have rights to open " + filename + " file.");
    }
    try
    {

        file >> config_data;
    }
    catch (const json::parse_error &e)
    {
        if (file.peek() == std::ifstream::traits_type::eof())
        {
            config_data = json::object();
        }
        throw JsonError("Cannot connect to " + filename + " file.");
    }
}
