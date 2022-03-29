#include "Form.hpp"
#include "Bureaucrat.hpp"

int main( void ) {
	Form formulario;

	std::cout << "Formulario for default." << std::endl;
	std::cout << "Name " << formulario.getName() << std::endl;
	std::cout << "Grade required to be signed " << formulario.getGradeMin() << std::endl;
	std::cout << "Grade to be executed " << formulario.getGradeExec() << std::endl;
	std::cout << "Is signed? " << formulario.getSigned() << std::endl;
	std::cout << std::endl;

	Form custom("Custom Form", 10, 10);

	std::cout << "Custom formulario for default." << std::endl;
	std::cout << "Name " << custom.getName() << std::endl;
	std::cout << "Grade required to be signed " << custom.getGradeMin() << std::endl;
	std::cout << "Grade to be executed " << custom.getGradeExec() << std::endl;
	std::cout << "Is signed? " << custom.getSigned() << std::endl;
	std::cout << std::endl;

	Bureaucrat lenzo;

	std::cout << "Create a Default bureaucrat (lenzo)." << std::endl;
	std::cout << "Name " << lenzo.getName() << std::endl;
	std::cout << "Grade "  << lenzo.getGrade() << std::endl;
	std::cout << std::endl;

	Bureaucrat gadino("Gariadno", 4);

	std::cout << "Create a bureaucrat Gariadno." << std::endl;
	std::cout << "Name " << gadino.getName() << std::endl;
	std::cout << "Grade "  << gadino.getGrade() << std::endl;
	std::cout << std::endl;

	std::cout << "Sign lenzo to custom Form" << std::endl;
	try {
		custom.beSigned(lenzo);
		std::cout << "Signed sucessed" << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	lenzo.signForm(custom);
	std::cout << std::endl;

	std::cout << "Sign gariadno to custom Form" << std::endl;
	try {
		custom.beSigned(gadino);
		std::cout << "Signed sucessed" << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	gadino.signForm(custom);
	std::cout << std::endl;

    std::cout << formulario << std::endl;

	return (0);
}