#include "include/Errors/json_error.h"
JsonError::JsonError(const std::string &message) : std::runtime_error("Json Error: " + message) {};
