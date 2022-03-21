#include "Fixed.hpp"

Fixed::Fixed(void): value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->value = rhs.getRawBits();
    return (*this);
}

// Create a copy of all the content of class passed;

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = src.value;
    *this = src;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}