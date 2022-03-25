#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog( void );
		Dog( const Dog& src );
		Dog&	operator=( const Dog& rhs );
		~Dog();
		void		makeSound( void ) const;
		void		setIdea( int index, std::string ideia ) const;
		std::string	getIdea( int index ) const;
	private:
		Brain	*brain_;
};

#endif
