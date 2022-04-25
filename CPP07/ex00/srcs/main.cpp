#include <iostream>
#include "whatever.hpp"

int main( void ) {

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	int a2= 33, b2= 44;
	float c2= 33.4, d2 = 44.3;
	char l = 'L', f = 'F';

	std::cout << "Values: " << std::endl;
	std::cout << a2<< " - " << b2 << std::endl;
	std::cout << c2<< " - " << d2 << std::endl;
	std::cout << l << " - " << f << std::endl;
	std::cout << std::endl;

	std::cout << "Swap values:" << std::endl;
	swap(a2, b2);
	swap(c2, d2);
	swap(l, f);

	std::cout << a2 << " - " << b2 << std::endl;
	std::cout << c2 << " - " << d2 << std::endl;
	std::cout << l << " - " << f << std::endl;
	std::cout << std::endl;

	std::cout << "Swap values:" << std::endl;
	swap(a2, b2);
	swap(c2, d2);
	swap(l, f);

	std::cout << a2<< " - " << b2<< std::endl;
	std::cout << c2<< " - " << d2 << std::endl;
	std::cout << l << " - " << f << std::endl;
	std::cout << std::endl;

	std::cout << "Return min values: min(x, y)" << std::endl;
	std::cout << min(a2, b2) << std::endl;
	std::cout << min(c2, d2) << std::endl;
	std::cout << min(l, f) << std::endl;
	std::cout << std::endl;

	std::cout << "Return max values: max(x, y)" << std::endl;
	std::cout << max(a2, b2) << std::endl;
	std::cout << max(c2, d2) << std::endl;
	std::cout << max(l, f) << std::endl;
	std::cout << std::endl;

	return (0);
}
