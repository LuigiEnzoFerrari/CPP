#include "Bureaucrat.hpp"

void	putBreaksLines(int n) {
	for (int i = 0; i < n; i++)
		std::cout << std::endl;
}

void	printBureaucrat(Bureaucrat &b) {
		std::cout
			<< "Name: " << b.getName() << std::endl
			<< "Grade: " << b.getGrade() << std::endl;
}

int main(void) {
	Bureaucrat  Marik("Marik", 45);

	printBureaucrat(Marik);

	try {
		std::cout << "Try down grade by 130: " << Marik.getGrade() + 130 << std::endl;
		Marik.downGrade(130);
	}
	catch (const std::exception & e) {
		std::cout << "Give up your " << e.what() << std::endl;
	}

	putBreaksLines(2);
	printBureaucrat(Marik);

	try {
		std::cout << "Try down grade by 105: " << Marik.getGrade() + 105 << std::endl;
		Marik.downGrade(105);
	}
	catch (const std::exception & e) {
		std::cout << "Give up your " << e.what() << std::endl;
	}
	putBreaksLines(2);
	printBureaucrat(Marik);

	try {
		std::cout << "Try descrease grade by 25:" << std::endl;
		Marik.upGrade(25);
	}
	catch (const std::exception & e) {
		std::cout << "Give up your " << e.what() << std::endl;
	}
	putBreaksLines(2);
	printBureaucrat(Marik);

	try {
		std::cout << "Try descrease grade by 125:" << std::endl;
		Marik.upGrade(125);
	}
	catch (const std::exception & e) {
		std::cout << "Give up your " << e.what() << std::endl;
	}
	putBreaksLines(2);
	printBureaucrat(Marik);

	return (0);
}
