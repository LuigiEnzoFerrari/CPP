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
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static const Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
		static const Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
	private:
		int	_value;
		static int	_bits;
};
std::ostream& operator<<( std::ostream& os, const Fixed& src );
#endif
