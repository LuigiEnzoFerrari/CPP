#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria* _inventory[4];

	public:
		MateriaSource( void );
        MateriaSource ( MateriaSource const & src );
        MateriaSource& operator=( MateriaSource const & rhs );
		~MateriaSource( void );
        void learnMateria( AMateria* m );
        AMateria* createMateria(std::string const & type);
};

#endif