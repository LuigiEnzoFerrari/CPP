#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
}

Point::Point( const Point& src ) {
	*this = src;
}

Point::~Point( void ) {
}

Point&	Point::operator=( const Point& rhs ) {
	if (this != &rhs) {
		const_cast<Fixed &>(this->_x) = rhs._x;
		const_cast<Fixed &>(this->_y) = rhs._y;
	}
	return *this;
}

Fixed Point::getX( void ) const {
	return this->_x;
}

Fixed Point::getY( void ) const {
	return this->_y;
}
