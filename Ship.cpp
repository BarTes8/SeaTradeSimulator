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
    , crew_(0)
{}

Ship::Ship(int id, size_t speed, size_t maxCrew)
    : Ship(id, "", speed, maxCrew, 0)
{}

void Ship::setName(const std::string& name) {
    name_ = name;
}

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

Ship& Ship::operator+=(const size_t crew) {
    if (crew_ + crew <= maxCrew_) {
        crew_ += crew;
    }
    return *this;
}

Ship& Ship::operator-=(const size_t crew) {
    if (crew_ >= crew) {
        crew_ -= crew;
    }
    return *this;
}

