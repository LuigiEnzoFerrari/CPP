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
		static uint32_t	_hitPointsScav;
		static uint32_t	_energyPointsScav;
		static uint32_t	_attackDamageScav;
};

#endif
