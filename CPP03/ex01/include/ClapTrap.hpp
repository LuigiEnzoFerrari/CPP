#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( const std::string name );
		ClapTrap( const ClapTrap& src );
		ClapTrap&	operator=( const ClapTrap& rhs );
		~ClapTrap( void );

		void	attack( const std::string& target );
	
		void			takeDamage( uint32_t amount );
		void			beRepaired( uint32_t amount );
		uint32_t		getHitPoints( void ) const;
		uint32_t		getEnergyPoints( void ) const;
		std::string		getName( void ) const;

	protected:
		std::string _name;
		uint32_t	_hitPoints;
		uint32_t	_energyPoints;
		uint32_t	_attackDamage;
};
#endif
