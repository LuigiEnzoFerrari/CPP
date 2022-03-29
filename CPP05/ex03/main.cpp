# include "Intern.hpp"

int main( void ) {
	Intern	guiga;

	Form *robot = guiga.makeForm("robotomy request", "Mikasa");
	std::cout << "Name: " << robot->getName() << std::endl;
	std::cout << "Grade To be Executed: " << robot->getGradeExec() << std::endl;
	std::cout << "Grade To be Signed: " << robot->getGradeMin() << std::endl;

	Form *shrub = guiga.makeForm("shrubbery creation", "Mijardin");
	std::cout << "Name: " << shrub->getName() << std::endl;
	std::cout << "Grade To be Executed: " << shrub->getGradeExec() << std::endl;
	std::cout << "Grade To be Signed: " << shrub->getGradeMin() << std::endl;

	Form *presidential = guiga.makeForm("presidential pardon", "Miwar");
	std::cout << "Name: " << presidential->getName() << std::endl;
	std::cout << "Grade To be Executed: " << presidential->getGradeExec() << std::endl;
	std::cout << "Grade To be Signed: " << presidential->getGradeMin() << std::endl;

	Form *nowhere = guiga.makeForm("space", "Midofnowhere");
	if (nowhere != NULL) {
		std::cout << "Name: " << nowhere->getName() << std::endl;
		std::cout << "Grade To be Executed: " << nowhere->getGradeExec() << std::endl;
		std::cout << "Grade To be Signed: " << nowhere->getGradeMin() << std::endl;
	}
	delete robot;	
	delete shrub;	
	delete presidential;	
	delete nowhere;	
	return (0);
}