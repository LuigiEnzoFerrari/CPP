#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

int main()
{
    const Animal* hum = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound(); //will output the cat sound!
    cat->makeSound();
    hum->makeSound();
    delete dog;
    delete cat;
    delete hum;

    const WrongAnimal* wcat = new WrongCat();

    std::cout << wcat->getType() << " " << std::endl;
    wcat->makeSound();
    delete wcat;

    return 0;
}