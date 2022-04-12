#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& src );
		ScavTrap&	operator=( const ScavTrap& rhs );
		virtual ~ScavTrap( void );
		void	guardGate( void );
		void	attack( std::string const& target );
	protected:
		static _uint	_hitPointsScav;
		static _uint	_energyPointsScav;
		static _uint	_attackDamageScav;
};

#endif
