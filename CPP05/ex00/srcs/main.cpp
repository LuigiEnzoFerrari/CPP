#include "Bureaucrat.hpp"

void	putBreaksLines(int n)
{
	for (int i = 0; i < n; i++)
		std::cout << std::endl;
}

int main(void) {
	Bureaucrat  Marik("Marik", 45);

	try {
		std::cout
			<< "Name: " << Marik.getName() << std::endl
			<< "Grade: " << Marik.getGrade() << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << "Give up your " << e.what() << std::endl;
	}
	putBreaksLines(2);
	try {
		std::cout << "Increase grade by 130:" << std::endl;
		Marik.addGrade(130);
	}
	catch (const std::exception & e) {
		std::cout << "Give up your " << e.what() << std::endl;
	}
	putBreaksLines(2);
	try {
		std::cout
			<< "Name: " << Marik.getName() << std::endl
			<< "Grade: " << Marik.getGrade() << std::endl;
		std::cout << "Descrease grade by 130:" << std::endl;
		Marik.removeGrade(25);
		std::cout
			<< "Name: " << Marik.getName() << std::endl
			<< "Grade: " << Marik.getGrade() << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << "Give up your " << e.what() << std::endl;
	}
	return (0);
}
