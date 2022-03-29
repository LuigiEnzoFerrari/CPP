#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ) {

    PresidentialPardonForm pardon("world peace");

    std::cout << "Creating a " << pardon.getName() << std::endl;
    std::cout << "Target: " << pardon.getTarget() << std::endl;
    std::cout << "Grade to be Signed: " << pardon.getGradeMin() << std::endl;
    std::cout << "Grade to be Executed: " << pardon.getGradeExec() << std::endl;
    std::cout << std::endl;
    
    Bureaucrat  lenzo("luigi", 50);
    std::cout << "Creating a bureaucrat named " << lenzo.getName() << std::endl;
    std::cout << "Grade: " << lenzo.getGrade() << std::endl;
    std::cout << std::endl;

    std::cout << "Signing " << lenzo.getName() << " to " << pardon.getName() << std::endl;
    try {
        pardon.beSigned(lenzo);
        std::cout << "Signed successfully" << std::endl;
    } catch(std::exception &e) {
        std::cout << "Signed Unsuccessfully" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Executing " << lenzo.getName() << " to " << pardon.getName() << std::endl;
    try {
        pardon.execute(lenzo);
        std::cout << "Execute successfully" << std::endl;
    } catch(std::exception &e) {
        std::cout << "Execute Unsuccessfully" << std::endl;
    }
    std::cout << std::endl;

    RobotmyRequestForm robot("Future");

    std::cout << "Creating a " << robot.getName() << std::endl;
    std::cout << "Target: " << robot.getTarget() << std::endl;
    std::cout << "Grade to be Signed: " << robot.getGradeMin() << std::endl;
    std::cout << "Grade to be Executed: " << robot.getGradeExec() << std::endl;
    std::cout << std::endl;
    
    Bureaucrat  aroque("Adrian", 10);
    std::cout << "Creating a bureaucrat named " << aroque.getName() << std::endl;
    std::cout << "Grade: " << aroque.getGrade() << std::endl;
    std::cout << std::endl;

    std::cout << "Signing " << aroque.getName() << " to " << robot.getName() << std::endl;
    try {
        robot.beSigned(aroque);
        std::cout << "Signed successfully" << std::endl;
    } catch(std::exception &e) {
        std::cout << "Signed Unsuccessfully" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Executing " << aroque.getName() << " to " << robot.getName() << std::endl;
    try {
        robot.execute(aroque);
        std::cout << "Execute successfully" << std::endl;
    } catch(std::exception &e) {
        std::cout << "Execute Unsuccessfully" << std::endl;
    }
    std::cout << std::endl;

    ShrubberyCreationForm shruberry("Nothing");

    std::cout << "Creating a " << shruberry.getName() << std::endl;
    std::cout << "Target: " << shruberry.getTarget() << std::endl;
    std::cout << "Grade to be Signed: " << shruberry.getGradeMin() << std::endl;
    std::cout << "Grade to be Executed: " << shruberry.getGradeExec() << std::endl;
    std::cout << std::endl;
    
    Bureaucrat  gadino("Gustavo", 136);
    std::cout << "Creating a bureaucrat named " << gadino.getName() << std::endl;
    std::cout << "Grade: " << gadino.getGrade() << std::endl;
    std::cout << std::endl;

    std::cout << "Signing " << gadino.getName() << " to " << shruberry.getName() << std::endl;
    try {
        shruberry.beSigned(gadino);
        std::cout << "Signed successfully" << std::endl;
    } catch(std::exception &e) {
        std::cout << "Signed Unsuccessfully" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Executing " << gadino.getName() << " to " << shruberry.getName() << std::endl;
    try {
        shruberry.execute(gadino);
        std::cout << "Execute successfully" << std::endl;
    } catch(std::exception &e) {
        std::cout << "Execute Unsuccessfully" << std::endl;
    }
    std::cout << std::endl;

    Bureaucrat victor("victor", 60);

    victor.executeForm(shruberry);
    victor.executeForm(robot);
    victor.executeForm(pardon);
	return (0);
}