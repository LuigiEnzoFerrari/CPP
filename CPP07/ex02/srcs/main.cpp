#include "Array.hpp"
#include <iostream>
#include <cmath>
#define MAX_VAL 750

template <typename T>
void    addNumbers(T& a){
	static T n = 32;

	n++;
	a += n;
}

template <typename T>
void	initFloat(T& a) {
    static float n = 2.2;
    n += 1.3;
	a = n;
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
		array.applyIter(addNumbers);
		array.applyIter(print);
		std::cout << std::endl << std::endl;

		std::cout << "array[13]: " << array[13];
		std::cout << std::endl << std::endl;
	}
    catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main( void ) {
	Array<int> one(25);
	Array<char> two(20);
	Array<float> three(18);
	Array<double> four(15);
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

	// Test subject

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;

	return (0);
}


