#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

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
	try { dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch (const std::bad_cast &e) {}

	try { dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	} catch (const std::bad_cast &e) {}

	try { dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	} catch (const std::bad_cast &e) {}
}

Base    *getClass() {
	uint32_t random;

	srand(time(NULL));
	random = std::rand() % 3;
	if (random == 0)
		return (new A());
	else if (random == 0)
		return (new B());
	else
		return (new C());
}

int main( void ) {
	Base    *type = getClass();
	identify(type);
	identify(*type);
	delete type;
	return (0);
}