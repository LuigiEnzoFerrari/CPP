/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:26:19 by lenzo-pe          #+#    #+#             */
/*   Updated: 2022/04/05 17:15:25 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"

void    giveBreakLines(size_t n) {
	while (n--)
		std::cout << std::endl;
}

int main( void )
{
	std::cout << "---Ice and Cure Constructors:---" << std::endl;
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	giveBreakLines(2);

	std::cout << "---Use:---" << std::endl;
	std::cout << "var ice: " << ice->getType() << std::endl;
	std::cout << "var cure: " << cure->getType() << std::endl;
	giveBreakLines(2);
	
	std::cout << "---Copy:---" << std::endl;
	AMateria *ice2 = ice->clone();
	AMateria *cure2 = cure->clone();
	AMateria *ice3 = ice->clone();
	std::cout << "var ice2: " << ice2->getType() << std::endl;
	std::cout << "var cure2: " << cure2->getType() << std::endl;
	std::cout << "var ice2: " << ice3->getType() << std::endl;
	giveBreakLines(2);

	std::cout << "---Compare Memory:---" << std::endl;
	std::cout << "var ice: " << ice << std::endl;
	std::cout << "var ice2: " << ice2 << std::endl;
	std::cout << "var cure: " << cure << std::endl;
	std::cout << "var cure2: " << cure2 << std::endl;
	giveBreakLines(2);

	std::cout << "---Character Constructor---" << std::endl;
	ICharacter *luigi = new Character("luigi");
	ICharacter *lenzo = new Character();

	giveBreakLines(2);
	std::cout << "---Names:---" << std::endl;
	std::cout << "var luigi: " << luigi->getName() << std::endl;
	std::cout << "var lenzo: " << lenzo->getName() << std::endl;

	giveBreakLines(2);
	std::cout << "---Materia Uses:---" << std::endl;
	ice->use(*luigi);
	cure->use(*luigi);

	giveBreakLines(2);
	std::cout << "---Character equipe:---" << std::endl;
	luigi->equip(ice);
	luigi->equip(cure);
	luigi->equip(ice2);
	luigi->equip(cure2);
	luigi->equip(cure);
	luigi->equip(ice3);

	giveBreakLines(2);
	std::cout << "---Use from equiped materias:---" << std::endl;
	luigi->use(0, *lenzo);
	luigi->use(1, *lenzo);
	luigi->use(3, *lenzo);
	
	giveBreakLines(2);
	std::cout << "---Unquipe materias:---" << std::endl;
	luigi->unequip(0);
	luigi->unequip(1);
	luigi->unequip(3);
	luigi->unequip(4);

	giveBreakLines(2);
	std::cout << "---MateriaSource constructor:---" << std::endl;
    IMateriaSource *src = new MateriaSource();

	giveBreakLines(2);
	std::cout << "---LearnMateria:---" << std::endl;
    src->learnMateria(ice);
    src->learnMateria(cure);
    src->learnMateria(ice2);
    src->learnMateria(cure2);
    src->learnMateria(ice3);

	giveBreakLines(2);
	std::cout << "---CreateMateria:---" << std::endl;
    AMateria *cpy = src->createMateria("ice");
    AMateria *cpy2 = src->createMateria("DontExist");
    std::cout << "var cpy: " << cpy->getType() << std::endl;
    std::cout << "var cpy2: " << cpy2 << std::endl;

	giveBreakLines(2);
	std::cout << "---Destructros:---" << std::endl;

	delete ice;
	delete cure;
	delete ice2;
	delete cure2;
	delete ice3;
	delete luigi;
	delete lenzo;
    delete src;
    delete cpy;
    delete cpy2;

	return (0);
}
