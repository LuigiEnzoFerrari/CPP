# ifndef SPAN_HPP
# define SPAN_HPP
# include <cstdint>
# include <vector>
# include <exception>
# include <algorithm>

class Span {
	public:
		Span( void );
		Span( uint32_t n );
		Span( Span const &src );
		~Span( void );

		Span &operator=( Span const &rhs );

		void	addNumber( int n );
		void	addNumbers( std::vector<int> numbers );
		int		shortestSpan( void );
		int		longestSpan( void );
		void	print( void );

	private:
		std::vector<int> _vec;
		std::uint32_t _n;
		struct SpanFullException : public std::exception {
			const char *what() const throw();
		};
		
		struct SpanHasNotSpaceEnough : public std::exception {
			const char *what() const throw();
		};
		
		struct SpanHasNotEnoughValuesToCompare : public std::exception {
			const char *what() const throw();
		};
		
};

#endif