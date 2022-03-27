#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	// Weapon gun = Weapon("Bazuka");

	// HumanA lenzo("luigi", gun);
	// lenzo.attack();
	// HumanB her("her");
	// HumanB him("him", gun);
	// her.attack();
	// him.attack();
	// Weapon pera = Weapon("pera");
	// Weapon abacaxi = Weapon("acabaxi");
	// her.setWeapon(pera);
	// him.setWeapon(abacaxi);
	// her.attack();
	// him.attack();
    Weapon gun = Weapon("banana");
    HumanB her("her");
    her.setWeapon(gun);
    her.attack();
    gun.setType("zueira");
    her.attack();
    her.setWeapon(gun);
    her.attack();
	return (0);
}