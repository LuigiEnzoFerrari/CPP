/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:26:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/03/25 01:06:59 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	setIdeias( Animal *animals, std::string text ) {
	for ( int i = 0; i < 100; i++ ) {
		animals->setIdea(i, std::to_string(i) + text);
	}
}

int main()
{
    Dog ha;

	return (0);
}
