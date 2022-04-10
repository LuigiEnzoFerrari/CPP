#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void ): _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int raw ) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits( raw << Fixed::_bits );
}

Fixed::Fixed( const float raw ) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits( (int)roundf(raw * (1 << Fixed::_bits)) );
}

Fixed	&Fixed::operator=( const Fixed& rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
    	this->_value = rhs.getRawBits();
	return ( *this );
}

Fixed::Fixed( Fixed const &src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<( std::ostream& os, const Fixed& src ) {
	os << src.toFloat();
	return ( os );
}

int	Fixed::getRawBits( void ) const {
	return ( this->_value );
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

int	Fixed::toInt( void ) const {
	return ( roundf(this->_value >> Fixed::_bits) );
}

float	Fixed::toFloat( void ) const {
	return ( (float)this->_value / ((float)(1 << Fixed::_bits)) );
}
