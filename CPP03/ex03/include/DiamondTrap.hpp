# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& src );
		DiamondTrap&	operator=( const DiamondTrap& rhs );
		~DiamondTrap( void );
		void	whoAmI( void ) const;
		std::string	getName( void ) const;
	private:
		std::string _name;
};

#endif
