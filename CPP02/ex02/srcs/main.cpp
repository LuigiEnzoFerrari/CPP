#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

std::cout << "---------------" << std::endl;

std::cout << "min " << Fixed::min( a, b ) << std::endl;

a.setRawBits(roundf(9.5 * (1 << 8)));

std::cout << a << " " << b << std::endl;
std::cout << "> " << ((a > b) ? "a": "b") << std::endl;
std::cout << "< " << ((a < b) ? "a": "b") << std::endl;
std::cout << ">= " << ((a >= b) ? "a": "b") << std::endl;
std::cout << "<= " << ((a <= b) ? "a": "b") << std::endl;
std::cout << "== " << ((a == b) ? "a": "b") << std::endl;
std::cout << "- " << (a - b) << std::endl;
std::cout << "+ " << (a + b) << std::endl;
std::cout << "* " << (a * b) << std::endl;
a.setRawBits(roundf(21 * (1 << 8)));
Fixed c(4.2f);  
std::cout << a << " " << c << std::endl;
std::cout << "/ " << (a / c) << std::endl;
return (0);
}
