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
		static _uint	_hitPointsFrag;
		static _uint	_energyPointsFrag;
		static _uint	_attackDamageFrag;
};

#endif
