#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& src );
		ScavTrap&	operator=( const ScavTrap& rhs );
		~ScavTrap();
		void	guardGate();
};

#endif
