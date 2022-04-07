#include "easyfind.hpp"

int	main( void ) {
	std::vector<int> luigi = {2, 3, 4, 5};
	std::vector<int>::iterator it;
	try {
		it = easyfind(luigi, 3);
		std::cout << *it << std::endl;
	} catch (ElementNotFoundException &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		it = easyfind(luigi, 5);
		std::cout << *it << std::endl;
	} catch (ElementNotFoundException &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		it = easyfind(luigi, 7);
		std::cout << *it << std::endl;
	} catch (ElementNotFoundException &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
