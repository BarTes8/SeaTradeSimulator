#pragma once

#include <string>

class Ship {
public:
    int getId() const;
    std::string getName() const;
    size_t getSpeed() const;
    size_t getMaxCrew() const;
    size_t getCapacity() const;
    
private:
    int id_{};
    std::string name_{};
    size_t speed_{};
    size_t maxCrew_{};
    size_t capacity_{};
};
