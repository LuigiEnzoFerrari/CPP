#ifndef MUTANTSTACK_HPP
# define MUANTSTACK_HPP

# include <iterator>
# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
	public:
		typedef typename Container::iterator iterator;
		MutantStack( void ): std::stack<T, Container>() {};
		MutantStack( MutantStack const &src ): std::stack<T, Container>(src) {};
		~MutantStack( void ) {};
		iterator	begin( void ) {
			return (this->c.begin());
		};
		iterator	end( void ) {
			return (this->c.end());
		};
		MutantStack &operator=( MutantStack const &rhs ) {
			if (this != &rhs) {
				std::stack<T, Container>::operator=(rhs);
			}
			return (*this);
		};
};

#endif
