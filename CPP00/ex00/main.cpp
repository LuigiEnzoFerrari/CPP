#include <iostream>
#include <cctype>

void	print_word(char *argv) {
	for (;*argv; argv++)
		std::cout << (char) toupper(*argv);
}

void	print_array(char **argv) {
	for (;*argv; argv++) {
		print_word(*argv);
        if (*(argv + 1) != NULL)
            std::cout << " ";
    }
}

int	main(int argc, char **argv) {
	if (argc > 1)
		print_array(argv + 1);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
