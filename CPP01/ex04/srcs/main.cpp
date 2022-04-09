#include "ReplaceStrings.hpp"
# include <iostream>
# include <fstream>
# include <cstdlib>

int openFiles(char **argv, std::ifstream &ifile, std::ofstream &ofile)
{
	if (std::string(argv[2]) == "") {
		std::cerr
			<< "Error: no strings to replace"
			<< std::endl;
		return (1);
	}
	ifile.open(argv[1]);
	if (!ifile.is_open()) {
		std::cerr
			<< "Error: cannot open file " << argv[1]
			<< std::endl;
		return (1);
	}
	ofile.open((std::string(argv[1]) + std::string(".replace")).c_str());
	if (!ofile.is_open()) {
		std::cerr
			<< "Error: cannot open file " << argv[1]
			<< std::endl;
		return (1);
	}
	return (0);
}

void	replaceStringsInFile(char **argv)
{
	std::ifstream	ifile;
	std::ofstream	ofile;
	std::string	text;

	if (openFiles(argv, ifile, ofile))
		std::exit (1);
	std::getline(ifile, text, '\0');
	ReplaceStrings	rs(&text, argv[2], argv[3]);

	text = rs.replace();
	ofile << text;
}

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr
			<< "Usage: ./main.exe <input_file> <strings> <replace-strings>"
			<< std::endl;
		return (1);
	}
	replaceStringsInFile(argv);
	return (0);
}
