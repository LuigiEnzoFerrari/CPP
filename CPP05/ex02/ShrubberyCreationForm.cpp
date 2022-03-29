#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ):
    Form("ShrubberyCreationForm", 145, 137), target_("house") {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
    Form("ShrubberyCreationForm", 145, 137), target_(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
    Form("ShrubberyCreationForm", 145, 137) {
    this->target_ = src.target_;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    if (this == &rhs) {
        this->target_ = rhs.target_;
    }
    return (*this);
}

const std::string ShrubberyCreationForm::getTarget( void ) const {
    return (this->target_);
}

void	ShrubberyCreationForm::execute( Bureaucrat& bure ) const {
    if (this->getSigned() == false) {
        throw ShrubberyCreationForm::IsNotSignedToExecute();
    } else if (this->getGradeExec() < bure.getGrade()) {
		throw ShrubberyCreationForm::GradeTooLowException();
	} else {
        std::ofstream	newFile((this->target_ + "_shrubbery").c_str());

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
