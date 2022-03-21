#ifndef X_FIXED_H
#define X_FIXED_H
#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( const Fixed& src );
		Fixed( const int raw );
		Fixed( const float raw );
		Fixed&	operator=( const Fixed& rhs );
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int	value;
		static const int	bits;
};
std::ostream& operator<<( std::ostream& os, const Fixed& src );
#endif
