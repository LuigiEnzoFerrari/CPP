/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:26:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/04/05 00:52:30 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	setIdeias( Animal *animals, std::string text ) {
	for ( int i = 0; i < 100; i++ ) {
		animals->setIdea(i, std::to_string(i) + text);
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
		std::cout << animals[i]->getType() + std::to_string(i) << std::endl;
		if (i % 2) {
			setIdeias(animals[i], " Au Au Au");
		} else {
			setIdeias(animals[i], " Miau Miau Miau");
		}
	}
	
	std::cout << std::endl << "End of getType and seIdeias" << std::endl << std::endl;

	Cat *cat = (Cat *)animals[0];
	Dog *dog = (Dog *)animals[1];

	Cat copyCat(*cat);
	Dog copyDog(*dog);

	std::cout << std::endl << "End of Copy Constructors" << std::endl << std::endl;

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
