#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <cstdlib>

typedef unsigned int _uint;

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( const std::string name );
		ClapTrap( const ClapTrap& src );
		ClapTrap&	operator=( const ClapTrap& rhs );
		~ClapTrap( void );
		void	attack( const std::string& target );
		void	takeDamage( _uint amount );
		void	beRepaired( _uint amount );

		_uint	getHitPoints( void ) const;
		_uint	getEnergyPoints( void ) const;
		_uint	getAttackDamage( void ) const;
		std::string	getName( void ) const;
	private:
		std::string _name;
		_uint	_hitPoints;
		_uint	_energyPoints;
		_uint	_attackDamage;
};

#endif
