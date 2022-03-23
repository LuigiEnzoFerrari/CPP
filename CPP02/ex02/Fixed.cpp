#include "Fixed.hpp"

int Fixed::bits = 8;

Fixed::Fixed( void ): value(0) {
}

Fixed::Fixed( const Fixed& src ) {
    this->setRawBits( src.getRawBits() );
}

Fixed::Fixed( const int raw ) {
	this->setRawBits( raw << Fixed::bits );
}

Fixed::Fixed( const float raw ) {
	this->setRawBits( (int)roundf(raw * (1 << Fixed::bits)) );
}

Fixed	&Fixed::operator=( const Fixed& rhs ) {
	if (this == &rhs)
		return (*this);
	this->value = rhs.getRawBits();
	return (*this);
}

Fixed   &Fixed::operator++( void ) {
	this->setRawBits( this->getRawBits() + 1 );
	return (*this);
}

bool   Fixed::operator>( const Fixed& rhs ) {
	return (this->getRawBits() > rhs.getRawBits());
}

bool   Fixed::operator<( const Fixed& rhs ) {
	return (this->getRawBits() < rhs.getRawBits());
}

bool   Fixed::operator>=( const Fixed& rhs ) {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool   Fixed::operator<=( const Fixed& rhs ) {
	return (this->getRawBits() <= rhs.getRawBits());
}

bool   Fixed::operator==( const Fixed& rhs ) {
	return (this->getRawBits() == rhs.getRawBits());
}

bool   Fixed::operator!=( const Fixed& rhs ) {
	return (this->getRawBits() != rhs.getRawBits());
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

	temp.setRawBits( (this->getRawBits() * rhs.getRawBits()) >> this->bits );
	return (temp);
}

Fixed   Fixed::operator/( const Fixed& rhs ) {
	Fixed temp;

	temp.setRawBits( this->getRawBits() / rhs.getRawBits() << this->bits );
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

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed::~Fixed() {
}

int	Fixed::getRawBits() const {
	return ( this->value );
}

void	Fixed::setRawBits( int const raw ) {
	this->value = raw;
}

int	Fixed::toInt( void ) const {
	return ( roundf(this->value >> Fixed::bits) );
}

float	Fixed::toFloat( void ) const {
	return ( (float)this->value / ((float)(1 << Fixed::bits)) );
}
