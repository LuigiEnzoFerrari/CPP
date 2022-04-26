#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>
#include <cmath>

void    identify(Base* p) {
	if (p == NULL)
		std::cout << "NULL" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "I don't know" << std::endl;
}

void    identify(Base& p) {
	try { (void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch (...) {}

	try { (void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	} catch (...) {}

	try { (void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	} catch (...) {}
}

Base    *getClass() {
	int random;

	srand(time(NULL));
	random = rand() % 3;
	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
    return (NULL);
}

int main( void ) {
	Base    *type = getClass();
	identify(type);
	identify(*type);
	delete type;
	return (0);
}
