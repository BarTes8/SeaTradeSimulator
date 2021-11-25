#pragma once

#include <stddef.h>
#include <string>

class Ship {
public:
    Ship();
    Ship(int id, const std::string& name, size_t speed, size_t maxCrew, size_t capacity);
    Ship(int id, size_t speed, size_t maxCrew);

    void setName(const std::string& name);

    int getId() const;
    std::string getName() const;
    size_t getSpeed() const;
    size_t getMaxCrew() const;
    size_t getCapacity() const;

    Ship& operator+=(const size_t crew);
    Ship& operator-=(const size_t crew);


private:
    const int id_{};
    std::string name_{};
    size_t speed_{};
    size_t maxCrew_{};
    size_t capacity_{};
    size_t crew_{};
};
