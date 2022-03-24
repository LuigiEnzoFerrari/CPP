#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( const WrongCat& src );
		WrongCat&	operator=( const WrongCat& rhs );
		~WrongCat();
		void	makeSound( void ) const;
};

#endif
