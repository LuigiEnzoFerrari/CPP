# include <iostream>
# include "Span.hpp"

std::vector<int> randomVector(int n) {
	std::vector<int> vec;
	int i = 0;

	while (i < n) {
		vec.push_back(std::rand() % 100);
		i++;
	}
	return (vec);
}

void	testAddNumber(int n, int m) {
	Span span(n);
	std::vector<int> vec = randomVector(m);
	std::vector<int>::iterator it = vec.begin();

	for (; it != vec.end(); it++)
		span.addNumber(*it);
	span.print();
}

void	testAddNumbers(int n, int m) {
	Span span(n);
	std::vector<int> vec = randomVector(m);

	span.addNumbers(vec);
	span.print();
}

void	testShortestSpan(int n, int m) {
	Span span(n);
	std::vector<int> vec = randomVector(m);
	std::vector<int>::iterator it = vec.begin();

	for (; it != vec.end(); it++) {
		span.addNumber(*it);
	}
	span.print();
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
}

void	testLongestSpan(int n, int m) {
	Span span(n);
	std::vector<int> vec = randomVector(m);
	std::vector<int>::iterator it = vec.begin();

	for (; it != vec.end(); it++) {
		span.addNumber(*it);
	}
	span.print();
	std::cout << "Longest span: " << span.longestSpan() << std::endl;
}

void TryCatch(void(*f)(int, int), int n, int m) {
	try {
		f(n, m);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main( void )
{
	std::srand(time(NULL));

	TryCatch(testAddNumber, 10, 10);
	TryCatch(testAddNumber, 10, 11);
	TryCatch(testAddNumbers, 10, 10);
	TryCatch(testAddNumbers, 10, 11);
	TryCatch(testShortestSpan, 10, 10);
	TryCatch(testShortestSpan, 10, 1);
	TryCatch(testLongestSpan, 10, 10);
	TryCatch(testLongestSpan, 10, 1);
	// TryCatch(testShortestSpan, 10000, 10000);
	// TryCatch(testLongestSpan, 10000, 10000);
	return 0;
}
