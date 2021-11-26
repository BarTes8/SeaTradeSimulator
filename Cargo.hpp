#pragma once

#include <stddef.h>
#include <string>

class Cargo {
public:
    Cargo& operator+=(const size_t amount);
    Cargo& operator-=(const size_t amount);

private:
    std::string name_{};
    size_t amount_{};
    size_t basePrice_{};
};