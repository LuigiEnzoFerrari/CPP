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
		bool   operator>( const Fixed& rhs );
		bool   operator<( const Fixed& rhs );
		bool   operator>=( const Fixed& rhs );
		bool   operator<=( const Fixed& rhs );
		bool   operator==( const Fixed& rhs );
		bool   operator!=( const Fixed& rhs );
		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );
		Fixed	operator+( const Fixed& rhs );
		Fixed	operator-( const Fixed& rhs );
		Fixed	operator*( const Fixed& rhs );
		Fixed	operator/( const Fixed& rhs );
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static const Fixed& max(const Fixed &a, const Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
	private:
		int	value;
		static int	bits;
};
std::ostream& operator<<( std::ostream& os, const Fixed& src );
#endif
