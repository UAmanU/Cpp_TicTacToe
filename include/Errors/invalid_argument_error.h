#pragma once
#include <stdexcept>
class InvalidArgumentError : public std::runtime_error
{
public:
    InvalidArgumentError(const std::string &message);
};