#include "Luigi.hpp"

Luigi::Luigi() {}
Luigi::~Luigi() {}

Luigi &Luigi::operator=(const Luigi& rhs) {
    return (*this);
}
// Create a copy of all the content of class passed;

Luigi::Luigi(Luigi const &Luigi) {
    *this = Luigi;
}
