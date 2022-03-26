#include "Luigi.hpp"

Luigi::Luigi( void ) {}
Luigi::~Luigi( void ) {}

Luigi::Luigi(Luigi const &Luigi) {
    *this = Luigi;
}

Luigi &Luigi::operator=(const Luigi& rhs) {
    if (this == &rhs) {

    }
    return (*this);
}
