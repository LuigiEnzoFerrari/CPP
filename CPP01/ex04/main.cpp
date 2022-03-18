#include "header.hpp"

int	main(int argc, char **argv) {
	std::ifstream ifile;
	std::ofstream ofile;
	std::string text;

	if (argc != 4)
		return (1);
	ifile.open(*(argv + 1));
	if (!ifile.is_open())
		return (1);
	ofile.open(std::string(*(argv + 1)) + ".replace");
	if (!ofile.is_open())
		return (1);
	std::getline(ifile, text, '\0');
	text = replace_strings(text, *(argv + 2), *(argv + 3));
	ofile << text;
	return (0);
}
