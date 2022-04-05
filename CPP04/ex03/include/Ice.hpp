#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Ice: public AMateria {
	public:
		Ice( void );
		Ice ( Ice const & src );
		~Ice( void );
		Ice* clone( void ) const;
		Ice & operator=( Ice const & rhs );
		void	use(ICharacter& target);
};

#endif
