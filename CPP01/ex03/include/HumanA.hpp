#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class   HumanA {
	private:
		std::string	_name;
		Weapon&		_gun;
	public:
		HumanA(std::string name, Weapon& gun);
		void    attack( void );
};

#endif