#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	public:
		Animal( void );
		Animal( const std::string name );
		Animal( const Animal& src );
		Animal&	operator=( const Animal& rhs );
		virtual ~Animal( void );
		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
		virtual std::string	getIdea( int index ) const = 0;
		virtual void	setIdea( int index, std::string idea ) const = 0;
	protected:
		std::string type;
};

#endif
