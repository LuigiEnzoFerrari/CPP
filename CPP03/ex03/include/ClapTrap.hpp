#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

typedef unsigned int _uint;

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( const std::string name );
		ClapTrap( const ClapTrap& src );
		ClapTrap&	operator=( const ClapTrap& rhs );
		virtual ~ClapTrap( void );
		void		attack( const std::string& target );
		void		takeDamage( _uint amount );
		void		beRepaired( _uint amount );
		_uint	getHitPoints( void ) const;
		_uint	getEnergyPoints( void ) const;
		_uint	getAttackDamage( void ) const;
		virtual std::string	getName( void ) const;

	protected:
		std::string	_name;
		_uint	_hitPoints;
		_uint	_energyPoints;
		_uint	_attackDamage;
};
#endif
