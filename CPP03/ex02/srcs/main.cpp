#include "FragTrap.hpp"

void    printStatus(FragTrap& rafael) {
	std::cout << "Name: " << rafael.getName() << std::endl;
	std::cout << "Hit points: " << rafael.getHitPoints() << std::endl;
	std::cout << "Energy points: " << rafael.getEnergyPoints() << std::endl;
}


int main(void) {
	FragTrap rafael;

	printStatus(rafael);
	std::cout << std::endl;
	rafael.highFiveGuys();
	std::cout << std::endl;

	rafael.attack("Triv");
	printStatus(rafael);
	std::cout << std::endl;

	rafael.takeDamage(500);
	printStatus(rafael);
	std::cout << std::endl;

	rafael.beRepaired(1);
	printStatus(rafael);
	std::cout << std::endl;
	return (0);
}
