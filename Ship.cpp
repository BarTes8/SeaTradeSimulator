#include "Ship.hpp"

int Ship::getId() const { 
    return id_; 
}

std::string Ship::getName() const { 
    return name_; 
}

size_t Ship::getSpeed() const {
    return speed_;
}

size_t Ship::getMaxCrew() const {
    return maxCrew_;
}

size_t Ship::getCapacity() const {
    return capacity_;
}
