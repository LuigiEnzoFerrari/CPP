#include "ScavTrap.hpp"

void    printStatus(ScavTrap& lenzo) {
	std::cout << "Name: " << lenzo.getName() << std::endl;
	std::cout << "Hit points: " << lenzo.getHitPoints() << std::endl;
	std::cout << "Energy points: " << lenzo.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << lenzo.getAttackDamage() << std::endl;
}

int main( void ) {
	ScavTrap lenzo;

	printStatus(lenzo);
	std::cout << std::endl;
	lenzo.guardGate();
	std::cout << std::endl;

	lenzo.attack("Gadino");
	printStatus(lenzo);
	std::cout << std::endl;

	lenzo.takeDamage(10);
	printStatus(lenzo);
	std::cout << std::endl;

	lenzo.beRepaired(1);
	printStatus(lenzo);
	std::cout << std::endl;
	return (0);
}
