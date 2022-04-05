#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( const std::string name );
		WrongAnimal( const WrongAnimal& src );
		WrongAnimal&	operator=( const WrongAnimal& rhs );
		~WrongAnimal( void );
		std::string	getType() const;
		void	makeSound( void ) const;
	protected:
		std::string type;
};

#endif
