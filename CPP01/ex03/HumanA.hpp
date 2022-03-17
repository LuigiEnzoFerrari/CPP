#ifndef HUMANA_H
#define HUMANA_A

#include "Weapon.hpp"

class   HumanA {
	private:
		std::string	my_name;
		Weapon&		my_tool;
	public:
		HumanA(std::string name, Weapon& tool);
		void    attack();
};

#endif