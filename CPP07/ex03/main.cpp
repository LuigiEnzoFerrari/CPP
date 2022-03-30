#include "Array.hpp"
#include <iostream>

template <typename T>
void    asciiNumbers(T& a){
	static T n = 33;

	n++;
	if (n > 126)
		n = 32;
	a = n;
}

template <typename T>
void	initFloat(T& a) {
	 a = 2.3	;
}

template <typename T>
void    print(T& a) {
	std::cout << a << " ";
}

template <typename T>
void	applyTest(Array<T>& array) {
	try {
		std::cout << "array.size(): " << array.size() << std::endl;

		std::cout << "init values: " << std::endl;
		array.applyIter(print);
		std::cout << std::endl << std::endl;

		std::cout << "after iter values: " << std::endl;
		array.applyIter(asciiNumbers);
		array.applyIter(print);
		std::cout << std::endl << std::endl;


		std::cout << "array[16]: " << array[16];
		std::cout << std::endl << std::endl;
	}  catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main( void ) {
	Array<int> one(34);
	Array<char> two(20);
	Array<float> three(22);
	Array<double> four(17);
	Array<int> five(10);

	std::cout << "---<int>---" << std::endl;
	applyTest(one);
	std::cout << "---<char>---" << std::endl;
	applyTest(two);
	std::cout << "---<float>---" << std::endl;
	three.applyIter(initFloat);
	applyTest(three);
	std::cout << "---<Double>---" << std::endl;
	four.applyIter(initFloat);
	applyTest(four);
	std::cout << "--- Out of Range ---" << std::endl;
	applyTest(five);
	return (0);
}