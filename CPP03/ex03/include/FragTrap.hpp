#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap& src );
		FragTrap&	operator=( const FragTrap& rhs );
		virtual ~FragTrap( void );
		void    highFiveGuys( void );
	protected:
		static uint32_t	_hitPointsFrag;
		static uint32_t	_energyPointsFrag;
		static uint32_t	_attackDamageFrag;
};

#endif
