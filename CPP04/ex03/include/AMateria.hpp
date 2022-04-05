#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria {
	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( const AMateria& src );
		std::string const& getType( void ) const;
		virtual ~AMateria( void );
		AMateria&	operator=( const AMateria& rhs );

		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target ) = 0;
	protected:
		std::string _type;
};

#endif
