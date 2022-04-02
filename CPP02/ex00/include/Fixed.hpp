#ifndef X_FIXED_H
#define X_FIXED_H
#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( const Fixed& src );
		Fixed&	operator=( const Fixed& rhs );
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int	_value;
		static const int _bits;
};
#endif
