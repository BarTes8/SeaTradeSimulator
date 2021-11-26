#pragma once

#include <vector>

class Island;

class Map {

private:
    Island* currentPosition_;
    std::vector<Island> islands_;
};
