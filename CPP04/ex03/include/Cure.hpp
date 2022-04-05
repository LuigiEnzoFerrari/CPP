#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Cure: public AMateria {
	public:
		Cure( void );
		Cure ( Cure const & src );
		~Cure( void );
		Cure* clone( void ) const;
		Cure & operator=( Cure const & rhs );
		void	use(ICharacter& target);
};

#endif
