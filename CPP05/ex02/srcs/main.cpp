#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

template <typename T>
void	testForms( T& form) {
	std::cout << "Creating a " << form.getName() << std::endl;
	std::cout << "Target: " << form.getTarget() << std::endl;
	std::cout << "Grade to be Signed: " << form.getGradeToSign() << std::endl;
	std::cout << "Grade to be Executed: " << form.getGradeToExec() << std::endl;
	std::cout << std::endl;
}

template <typename T>
void	trySigned(T& form, Bureaucrat& bure) {

	std::cout << "Name: " << bure.getName() << std::endl;
	std::cout << "Grade: " << bure.getGrade() << std::endl;
	std::cout << std::endl;
	std::cout << "Signing " << bure.getName() << " to " << form.getName() << std::endl;
	try {
		form.beSigned(bure);
		std::cout << "Signed successfully" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Signed Unsuccessfully" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Executing " << bure.getName() << " to " << form.getName() << std::endl;
	try {
		form.execute(bure);
		std::cout << "Execute successfully" << std::endl;
	} catch(std::exception &e) {
		std::cout << "Execute Unsuccessfully" << std::endl;
	}
	std::cout << std::endl;
}

int main( void ) {

	PresidentialPardonForm pardon("world peace");
	RobotmyRequestForm robot("Future");
	ShrubberyCreationForm shruberry("Nothing");
	
	testForms(pardon);
	testForms(robot);
	testForms(shruberry);

	Bureaucrat  lenzo("luigi", 50);
	Bureaucrat  aroque("Adrian", 10);
	Bureaucrat  gadino("Gustavo", 136);


	trySigned(pardon, lenzo);
	trySigned(robot, aroque);
	trySigned(shruberry, gadino);

	Bureaucrat victor("victor", 60);


	std::cout << "Name: " << victor.getName() << std::endl;
	std::cout << "Grade: " << victor.getGrade() << std::endl;
	std::cout << std::endl;

	victor.executeForm(shruberry);
	victor.executeForm(robot);
	victor.executeForm(pardon);
	return (0);
}