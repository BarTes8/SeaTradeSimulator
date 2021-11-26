# pragma once

#include "Coordinates.hpp"

class Island {
public:
    Coordinates getCoordinates() const;
    
private:
    Coordinates position_;
};