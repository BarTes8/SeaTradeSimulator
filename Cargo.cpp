#include "Cargo.hpp"

#include <limits>

Cargo::Cargo(const std::string& name, size_t amount, size_t basePrice) 
    : name_(name)
    , amount_(amount)
    , basePrice_(basePrice)
{}

std::string Cargo::getName() const {
    return name_;
}

size_t Cargo::getAmount() const {
    return amount_;
}

size_t Cargo::getBasePrice() const {
    return basePrice_;
}
    
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

bool Cargo::operator ==(const Cargo& cargo) const {
    if (this->name_ == cargo.name_ && this->amount_ == cargo.amount_) {
        return true;
    }
    return false;
}
