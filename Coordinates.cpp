#include "Coordinates.hpp"

Coordinates::Coordinates(size_t positionX, size_t positionY)
    : positionX_(positionX)
    , positionY_(positionY)
{}

bool Coordinates::operator==(const Coordinates& coordinates) const {
    return positionX_ == coordinates.positionX_ 
        && positionY_ == coordinates.positionY_;
}