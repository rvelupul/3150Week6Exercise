#include "int_vector.h"

int_vector::int_vector() : id(0), x(0), y(0) {}

int_vector::int_vector(int id, int x, int y) : id(id), x(x), y(y) {}

int_vector::int_vector(const int_vector& other) : id(other.id), x(other.x), y(other.y) {}
