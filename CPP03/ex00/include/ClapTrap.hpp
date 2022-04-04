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
		void	takeDamage( uint32_t amount );
		void	beRepaired( uint32_t amount );

		uint32_t	getHitPoints( void ) const;
		uint32_t	getEnergyPoints( void ) const;
		std::string	getName( void ) const;
	private:
		std::string name_;
		uint32_t    hit_points_;
		uint32_t    energy_points_;
		uint32_t    attack_damage_;
};
#endif
