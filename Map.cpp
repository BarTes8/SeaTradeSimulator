#include "Map.hpp"

#include <random>

Map::Map() {
    std::random_device rd;
    std::mt19937 gen(rd());
}