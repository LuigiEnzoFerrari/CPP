#include "HumanB.hpp"

HumanB::HumanB(std::string name):my_name(name), my_tool("") {
}

HumanB::HumanB(std::string name, Weapon tool):my_name(name), my_tool(tool) {
}

void	HumanB::attack() {
	std::string tool = this->my_tool.getType();
	std::cout << this->my_name + " attacks with their " + tool << std::endl;
}

void	HumanB::setWeapon(Weapon tool) {
	this->my_tool = tool;
}
