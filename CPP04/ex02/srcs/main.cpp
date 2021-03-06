/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:26:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/04/13 19:11:40 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	setIdeias( Animal *animals, std::string text ) {
	for ( int i = 0; i < 100; i++ ) {
		animals->setIdea(i, text);
	}
}

int main( void )
{
	Animal	*animals[4];

	for (size_t i = 0; i < 4 ; i++) {
		if (i % 2) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	std::cout << std::endl << "End of constructors" << std::endl << std::endl;

	for (size_t i = 0; i < 4 ; i++) {
		std::cout << animals[i]->getType() << i << std::endl;
		if (i % 2) {
			setIdeias(animals[i], " Au Au Au");
		} else {
			setIdeias(animals[i], " Miau Miau Miau");
		}
	}
	std::cout << std::endl;

	for (size_t i = 0; i < 4 ; i++) {
		std::cout << animals[i]->getType() << i << std::endl;
		for (int j = 0; j < 2; j++) {
			std::cout << animals[i]->getIdea(j) << std::endl;
		}
	}

	std::cout << std::endl << "End of getType and seIdeias" << std::endl << std::endl;

	Cat *cat = (Cat *)animals[0];
	Dog *dog = (Dog *)animals[1];

	Cat copyCat(*cat);
	Dog copyDog(*dog);

	std::cout << std::endl << "End of copy constructors" << std::endl << std::endl;

	copyCat.setIdea(1, " banana com nescau");
	std::cout << cat->getType() << std::endl;
	std::cout << cat->getIdea(1) << std::endl;
	std::cout << copyCat.getType() << std::endl;
	std::cout << copyCat.getIdea(1) << std::endl;
	
	std::cout << std::endl << "End of copy getType and seIdeias" << std::endl << std::endl;

	for (size_t i = 0; i < 4 ; i++) {
		if (i % 2) {
			delete animals[i];
		} else {
			delete animals[i];
		}
	}

	std::cout << std::endl << "End of Destructors" << std::endl << std::endl;

	return (0);
}
