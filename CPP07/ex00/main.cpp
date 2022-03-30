#include <iostream>
#include "whatever.hpp"

int main( void ) {

	int a = 33, b = 44;
	float c = 33.4, d = 44.3;
	char l = 'L', f = 'F';

	std::cout << "Values: " << std::endl;
	std::cout << a << " - " << b << std::endl;
	std::cout << c << " - " << d << std::endl;
	std::cout << l << " - " << f << std::endl;
	std::cout << std::endl;

	std::cout << "Swap values:" << std::endl;
	std::cout << a << "-" << b << std::endl;
	swap(a, b);
	swap(c, d);
	swap(l, f);
	std::cout << a << " - " << b << std::endl;
	std::cout << c << " - " << d << std::endl;
	std::cout << l << " - " << f << std::endl;
	swap(a, b);
	swap(c, d);
	swap(l, f);
	std::cout << a << "-" << b << std::endl;
	std::cout << std::endl;

	std::cout << "Return min values: min(x, y)" << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << min(c, d) << std::endl;
	std::cout << min(l, f) << std::endl;
	std::cout << std::endl;

	std::cout << "Return max values: max(x, y)" << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << max(c, d) << std::endl;
	std::cout << max(l, f) << std::endl;
	std::cout << std::endl;
	return (0);
}