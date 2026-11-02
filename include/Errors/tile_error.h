#pragma once
#include <stdexcept>
#include <string>
class TileError : public std::runtime_error
{
public:
    TileError(const std::string &message);
};