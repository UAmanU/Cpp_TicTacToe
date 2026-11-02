#include "include/Utils/utils.h"
#include <iostream>
#include <limits>
void Utils::clear_cin()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
bool Utils::number_in_list(int object, const std::vector<int> &list)
{
    if (list.empty())
    {
        return false;
    }
    for (size_t i = 0; i < list.size(); i++)
    {
        if (list[i] == object)
        {
            return true;
        }
    }
    return false;
}