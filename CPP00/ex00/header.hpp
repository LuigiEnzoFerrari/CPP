#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cctype>

void	print_word(char *argv, char *arg_next) {
	for (;*argv; argv++)
		std::cout << (char) toupper(*argv);
	if (arg_next != NULL)
		std::cout << " ";
}

void	print_array(char **argv) {
	for (;*argv; argv++)
		print_word(*argv, *(argv + 1));
}

#endif
