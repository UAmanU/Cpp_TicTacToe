#include "include/Core/programm_launcher.h"
int main(void)
{
    std::unique_ptr<ConfigManager> config_manager = std::make_unique<ConfigManager>();
    std::unique_ptr<ProgrammLauncher> programm_launcher = std::make_unique<ProgrammLauncher>(std::move(config_manager));
    programm_launcher->start();
    return 0;
}