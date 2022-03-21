#ifndef X_FIXED_H
#define X_FIXED_H
#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( const Fixed& src );
		Fixed&	operator=( const Fixed& rhs );
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int	value;
		static const int bits = 8;
};
#endif
