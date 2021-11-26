#pragma once

#include <stddef.h>
#include <string>

class Cargo {
public:
    Cargo(const std::string& name, size_t amount, size_t basePrice);

    Cargo& operator+=(const size_t amount);
    Cargo& operator-=(const size_t amount);
    bool operator ==(const Cargo& cargo) const;

private:
    std::string name_{};
    size_t amount_{};
    size_t basePrice_{};
};