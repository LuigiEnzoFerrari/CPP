#include "Form.hpp"
#include "Bureaucrat.hpp"

void    testForm(Form &form) {
	std::cout << "Name: " << form.getName() << std::endl;
	std::cout << "Grade: to be signed " << form.getGradeToSign() << std::endl;
	std::cout << "Grade: to be executed " << form.getGradeToExec() << std::endl;
	std::cout << "Is signed: " << ((form.getSigned())? "true":"false") << std::endl;
	std::cout << std::endl;
}

void    testBureaucrat(Bureaucrat &bure) {
	std::cout << "Name: " << bure.getName() << std::endl;
	std::cout << "Grade: " << bure.getGrade() << std::endl;
	std::cout << std::endl;
}

void	testSignedForm(Form &form, Bureaucrat &bure) {
	try {
		form.beSigned(bure);
		std::cout << "Form " << form.getName() << " signed by " << bure.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main( void ) {
	Form form;

	testForm(form);
	Form custom("Custom", 10, 10);

	testForm(custom);

	Bureaucrat lenzo;
	Bureaucrat gadino("Gariadno", 4);

	testBureaucrat(lenzo);
	testBureaucrat(gadino);

	std::cout << "Sign lenzo to " << custom.getName() << std::endl;
	testSignedForm(custom, lenzo);
	lenzo.signForm(custom);
	std::cout << std::endl;

	std::cout << "Sign gariadno to " << custom.getName() << std::endl;
	testSignedForm(custom, gadino);
	gadino.signForm(custom);
	std::cout << std::endl;

	return (0);
}
