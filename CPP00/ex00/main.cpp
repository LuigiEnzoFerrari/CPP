#include "header.hpp"

int	main(int argc, char **argv) {
	if (argc > 1)
		print_array(argv + 1);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
