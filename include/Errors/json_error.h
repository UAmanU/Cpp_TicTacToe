#pragma once
#include <stdexcept>

class JsonError : public std::runtime_error
{
public:
    JsonError(const std::string &message);
};