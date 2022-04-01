#include "Harl.hpp"
#include <string>

int	insignificantProblems( std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4; i++) {
		if (levels[i] == level)
			return (0);
	}
	return (1);
}

int main( int argc, char **argv ) {
	Harl one;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2) {
		std::cout << "Usage: ./Harl <level>" << std::endl;
		return (1);
	} else if (insignificantProblems(argv[1])) {
		std::cout
			<< "[ Probably complaining about insignificant problems ]"
			<< std::endl;
		return (1);
	}

	size_t level_value = 0;
	for (size_t i = 0; i < 4; i++) {
		if (levels[i] == argv[1])
			level_value = i;
	}
	switch (level_value) {
		case 0:
				std::cout << "[" + levels[0] + "]" << std::endl;
				one.complain(levels[0]);
				__attribute__ ((fallthrough));
		case 1:
				std::cout << "[" + levels[1] + "]" << std::endl;
				one.complain(levels[1]);
				__attribute__ ((fallthrough));
		case 2:
				std::cout << "[" + levels[2] + "]" << std::endl;
				one.complain(levels[2]);
				__attribute__ ((fallthrough));
		case 3:
				std::cout << "[" + levels[3] + "]" << std::endl;
				one.complain(levels[3]);
				break ;
	}
	return (0);
}