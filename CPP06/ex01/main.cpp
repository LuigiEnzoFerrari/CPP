# include "Data.hpp"
# include <iostream>
# include <cstdint>

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main( void ) {
	Data one;

	one.value = 42;
    std::cout << "Init Data" << std::endl;
	std::cout << "Memory Adress: " << &one << std::endl;
	std::cout << "Data value: " << one.value << std::endl;
    std::cout << std::endl;

    std::cout << "Serialize Data" << std::endl;
	uintptr_t	raw = serialize(&one);
	std::cout << "Serialize value: " << raw << std::endl;
    std::cout << "In hexadecimal: " << std::hex << raw << std::endl;
    std::cout << std::dec << std::endl;

    std::cout << "Serialize Data" << std::endl;
	Data *two = deserialize(raw);
	std::cout << "Memory Adress: " << two << std::endl;
	std::cout << "Data value: " << two->value << std::endl;
    std::cout << std::endl;
	
	return (0);
}