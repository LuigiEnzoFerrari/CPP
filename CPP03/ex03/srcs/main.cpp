#include "DiamondTrap.hpp"

void    printStatus(DiamondTrap& diamond) {
	std::cout << "Name: " << diamond.getName() << std::endl;
	std::cout << "Hit points: " << diamond.getHitPoints() << std::endl;
	std::cout << "Energy points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << diamond.getAttackDamage() << std::endl;
}

int main(void) {
    DiamondTrap diamond("Rafael");

    std::cout << std::endl;
    diamond.highFiveGuys();
    std::cout << std::endl;
    diamond.guardGate();
    std::cout << std::endl;
    printStatus(diamond);
    std::cout << std::endl;
    diamond.attack("Triv");
    std::cout << std::endl;
    printStatus(diamond);
    std::cout << std::endl;
    diamond.whoAmI();
    std::cout << std::endl;
	return (0);
}
