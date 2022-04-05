#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat( void );
		Cat( const Cat& src );
		Cat&	operator=( const Cat& rhs );
		~Cat( void );
		void		setIdea( int index, std::string ideia ) const;
		std::string	getIdea( int index ) const;
		void	makeSound( void ) const;
    private:
        Brain*  brain_;
};

#endif
