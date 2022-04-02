#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
    private:
        const Fixed _x;
        const Fixed _y;
    public:
		Point( void );
		Point( const Point& src );
        Point( const float x, const float y );
		Point&	operator=( const Point& rhs );
		~Point( void );

        Fixed getX( void ) const;
        Fixed getY( void ) const;
};


#endif
