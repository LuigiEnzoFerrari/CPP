#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog( void );
		Dog( const Dog& src );
		Dog&	operator=( const Dog& rhs );
		~Dog( void );
		void	makeSound( void ) const;
};

#endif
