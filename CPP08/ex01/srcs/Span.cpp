#include <iostream>
#include "Span.hpp"

Span::Span( void ) : _n(0) {
}

Span::Span(uint32_t n) : _n(n) {
}

Span::Span(Span const &src) {
	*this = src;
}

Span::~Span( void ) {
}

Span&   Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		this->_vec = rhs._vec;
		this->_n = rhs._n;
	}
	return (*this);
}

const char *Span::SpanFullException::what() const throw() {
	return ("Span is full");
}

const char *Span::SpanHasNotSpaceEnough::what() const throw() {
	return ("Span has not space enough");
}

const char *Span::SpanHasNotEnoughValuesToCompare::what() const throw() {
	return ("Span has not enough values to compare");
}

void	Span::addNumber(int n) {
	if (this->_n == this->_vec.size())
		throw Span::SpanFullException();
	this->_vec.push_back(n);
	if (this->_n == this->_vec.size())
		this->_vec.shrink_to_fit();
}

void	Span::print( void ) {
	std::vector<int>::iterator it = this->_vec.begin();

	for(; it != this->_vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	Span::addNumbers(std::vector<int> numbers) {
	if (this->_n < this->_vec.size() + numbers.size())
		throw Span::SpanHasNotSpaceEnough();
	this->_vec.insert(this->_vec.end(), numbers.begin(), numbers.end());
}

int	Span::shortestSpan( void ) {
	if (this->_vec.size() < 2)
		throw Span::SpanHasNotEnoughValuesToCompare();
	std::vector<int> vector = this->_vec;
	std::sort(vector.begin(), vector.end());
	std::vector<int>::iterator it = vector.begin();
	int span = std::abs(*it - *(it + 1));

	while (it + 1 != vector.end()) {
		if (span > std::abs(*it - *(it + 1)))
			span = std::abs(*it - *(it + 1));
		it++;
	}
	return (span);
}

int	Span::longestSpan( void ) {
	if (this->_vec.size() < 2)
		throw Span::SpanHasNotEnoughValuesToCompare();

    int    big = *std::max_element(this->_vec.begin(), this->_vec.end());
    int    small = *std::min_element(this->_vec.begin(), this->_vec.end());
	return (std::abs(big - small));
}
