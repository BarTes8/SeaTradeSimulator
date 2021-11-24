#include "Ship.hpp"

Ship::Ship()
    : id_(-1)
{}

Ship::Ship(int id, const std::string& name, size_t speed, size_t maxCrew, size_t capacity)
    : id_(id)
    , name_(name)
    , speed_(speed)
    , maxCrew_(maxCrew)
    , capacity_(capacity)
{}

Ship::Ship(int id, size_t speed, size_t maxCrew)
    : Ship(id, "", speed, maxCrew, 0)
{}

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
