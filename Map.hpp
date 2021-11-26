#pragma once

#include "Island.hpp"

#include <vector>

class Map {
public:
    Map();

private:
    Island* currentPosition_;
    std::vector<Island> islands_;
};
