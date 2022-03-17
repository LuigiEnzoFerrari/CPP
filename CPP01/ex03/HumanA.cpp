#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& tool): my_tool(tool), my_name(name) {
}

void	HumanA::attack() {
	std::string tool = this->my_tool.getType();
	std::cout << this->my_name + " attacks with their " + tool << std::endl;
}
