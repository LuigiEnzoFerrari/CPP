#include "ClapTrap.hpp"

void    printStatus(ClapTrap& robin) {
	std::cout << "Name: " << robin.getName() << std::endl;
	std::cout << "Hit points: " << robin.getHitPoints() << std::endl;
	std::cout << "Energy points: " << robin.getEnergyPoints() << std::endl;
}

int main(void) {
	ClapTrap robin("Robin");

	printStatus(robin);
	std::cout << std::endl;

	robin.attack("Batman");
	printStatus(robin);
	std::cout << std::endl;

	robin.takeDamage(4);
	printStatus(robin);
	std::cout << std::endl;

	robin.takeDamage(8);
	printStatus(robin);
	std::cout << std::endl;

	robin.beRepaired(23);
	printStatus(robin);
	std::cout << std::endl;

	robin.beRepaired(4);
	printStatus(robin);
	std::cout << std::endl;

	robin.attack("Joker");
	robin.attack("Batdog");
	robin.attack("Batgirl");
	robin.attack("Catwoman");
	robin.attack("Superman");
	robin.attack("Mirror");
	robin.attack("Himself");
	std::cout << std::endl;
	printStatus(robin);
	std::cout << std::endl;
	robin.attack("Himself");
	robin.beRepaired(30);
	std::cout << std::endl;
	printStatus(robin);

	std::cout << std::endl;
	robin.takeDamage(8);
	std::cout << std::endl;
	return (0);
}
