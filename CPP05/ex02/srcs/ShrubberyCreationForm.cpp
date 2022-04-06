#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ):
    Form("ShrubberyCreationForm", 145, 137), _target("house") {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
    Form("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
    Form("ShrubberyCreationForm", 145, 137) {
    this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    if (this == &rhs) {
        this->_target = rhs._target;
    }
    return (*this);
}

const std::string ShrubberyCreationForm::getTarget( void ) const {
    return (this->_target);
}

void	ShrubberyCreationForm::execute( Bureaucrat& bure ) const {
    if (this->getSigned() == false) {
        throw ShrubberyCreationForm::IsNotSignedToExecute();
    } else if (this->getGradeToExec() < bure.getGrade()) {
		throw ShrubberyCreationForm::GradeTooLowException();
	} else {
        std::ofstream	newFile((this->_target + "_shrubbery").c_str());

        newFile << "\n\
                    ,@@@@@@@,\n\
            ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
            ,&%%%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
        ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
        %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
        %&&%/ %&%%%%&&@@\\ V /@@' `88\\8 `/88'\n\
        `&%\\ ` /%&'    |.|        \\ '|8'\n\
            |o|        | |         | |\n\
            |.|        | |         | |\n\
        jgs  \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";

        newFile.close();
    }
}
