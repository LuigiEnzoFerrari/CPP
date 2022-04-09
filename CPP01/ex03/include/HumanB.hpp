#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon		*_gun;
	public:
		HumanB( std::string name );
		HumanB( std::string name, Weapon* gun );
		void	attack( void );
		void	setWeapon( Weapon& tool );
};

#endif
