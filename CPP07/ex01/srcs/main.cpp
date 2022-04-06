#include "iter.hpp"
#include <iostream>

template<typename T>
void print(T& a) {
    std::cout << a << "  ";
}

template<typename T>
void    increment(T& a) {
    a++;
}

template<typename T>
void    decrement(T& a) {
    a--;
}

int main ( void ) {
    int array[4] = { 5, 7, 2, 0 };
    char array2[4] = { 'b', 'c', 'd', 'e' };
    float array3[4] = { 4.2, 3.1, 5.5, 14 };

    iter(array, (size_t)4, print);
    std::cout << std::endl;

    iter(array, (size_t)4, increment);
    iter(array, (size_t)4, print);
    std::cout << std::endl << std::endl;

    iter(array2, (size_t)4, print);
    std::cout << std::endl;

    iter(array2, (size_t)4, decrement);
    iter(array2, (size_t)4, print);
    std::cout << std::endl << std::endl;

    iter(array3, (size_t)4, print);
    std::cout << std::endl;

    iter(array3, (size_t)4, decrement);
    iter(array3, (size_t)4, print);
    std::cout << std::endl << std::endl;
    return (0);
}