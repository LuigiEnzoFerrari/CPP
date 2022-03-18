#ifndef HUMANB
#define HUMANB

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	my_name;
		Weapon		my_tool;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon tool);
		void	attack();
		void	setWeapon(Weapon tool);
};

#endif
