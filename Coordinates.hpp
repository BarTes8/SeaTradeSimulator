#pragma once

#include <stddef.h>

class Coordinates {
public:
    Coordinates(size_t positionX, size_t positionY);

    bool operator==(const Coordinates& coordinates) const;

private:
    size_t positionX_{};
    size_t positionY_{};
};