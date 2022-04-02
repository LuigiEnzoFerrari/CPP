#include "Fixed.hpp"

int Fixed::_bits = 8;

Fixed::Fixed( void ): _value(0) {
}

Fixed::Fixed( const Fixed& src ) {
    this->setRawBits( src.getRawBits() );
}

Fixed::Fixed( const int raw ) {
	this->setRawBits( raw << Fixed::_bits );
}

Fixed::Fixed( const float raw ) {
	this->setRawBits( (int)roundf( raw * (1 << Fixed::_bits)) );
}

Fixed	&Fixed::operator=( const Fixed& rhs ) {
	if (this == &rhs)
		return (*this);
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed   &Fixed::operator++( void ) {
	this->setRawBits( this->getRawBits() + 1 );
	return (*this);
}

bool   Fixed::operator>( const Fixed& rhs ) {
	return ( this->getRawBits() > rhs.getRawBits() );
}

bool   Fixed::operator<( const Fixed& rhs ) {
	return ( this->getRawBits() < rhs.getRawBits() );
}

bool   Fixed::operator>=( const Fixed& rhs ) {
	return ( this->getRawBits() >= rhs.getRawBits() );
}

bool   Fixed::operator<=( const Fixed& rhs ) {
	return ( this->getRawBits() <= rhs.getRawBits() );
}

bool   Fixed::operator==( const Fixed& rhs ) {
	return ( this->getRawBits() == rhs.getRawBits() );
}

bool   Fixed::operator!=( const Fixed& rhs ) {
	return ( this->getRawBits() != rhs.getRawBits() );
}

Fixed   Fixed::operator++( int ) {
	Fixed temp(*this);

	this->setRawBits( this->getRawBits() + 1 );
	return (temp);
}

Fixed&	Fixed::operator--( void ) {
	this->setRawBits( this->getRawBits() - 1 );
	return (*this);
}

Fixed   Fixed::operator--( int ) {
	Fixed temp(*this);

	this->setRawBits( this->getRawBits() - 1 );
	return (temp);
}

Fixed   Fixed::operator+( const Fixed& rhs ) {
	Fixed temp;

	temp.setRawBits( this->getRawBits() + rhs.getRawBits() );
	return (temp);
}

Fixed   Fixed::operator-( const Fixed& rhs ) {
	Fixed temp;

	temp.setRawBits( this->getRawBits() - rhs.getRawBits() );
	return (temp);
}

Fixed   Fixed::operator*( const Fixed& rhs ) {
	Fixed temp;

	temp.setRawBits( (this->getRawBits() * rhs.getRawBits()) >> this->_bits );
	return (temp);
}

Fixed   Fixed::operator/( const Fixed& rhs ) {
	Fixed temp;

	temp.setRawBits( this->getRawBits() / rhs.getRawBits() << this->_bits );
	return (temp);
}

std::ostream& operator<<( std::ostream& os, const Fixed& src ) {
	os << src.toFloat();
	return (os);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed::~Fixed( void ) {
}

int	Fixed::getRawBits() const {
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
