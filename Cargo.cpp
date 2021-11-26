#include "Cargo.hpp"

#include <limits>
    
Cargo& Cargo::operator+=(const size_t amount) {
    if (amount_ + amount <= std::numeric_limits<size_t>::max()) {
        amount_ += amount;
    }
    return *this;
}

Cargo& Cargo::operator-=(const size_t amount) {
    if (amount_ >= amount) {
        amount_ -= amount;
    }
    return *this;
}
