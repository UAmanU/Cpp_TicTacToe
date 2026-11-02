#include "include/Errors/tile_error.h"
TileError::TileError(const std::string &message) : std::runtime_error("Tile Error: " + message) {}