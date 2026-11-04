#include "include/Errors/invalid_argument_error.h"
InvalidArgumentError::InvalidArgumentError(const std::string &message) : std::runtime_error("Invalid argument error: " + message) {};