#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

int main( void )
{
    const Animal* hum = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl;

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << std::endl;


    dog->makeSound();
    cat->makeSound();
    hum->makeSound();
    std::cout << std::endl;

    delete dog;
    delete cat;
    delete hum;
    std::cout << std::endl;

    const WrongAnimal* wcat = new WrongCat();

    std::cout << wcat->getType() << " " << std::endl;
    wcat->makeSound();
    delete wcat;

    return 0;
}