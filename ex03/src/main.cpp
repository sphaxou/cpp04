/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:54:45 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/17 03:17:37 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "remove everything" << std::endl;
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(0);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(0, *bob);
	std::cout << "equip ice in 5th" << std::endl;
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "unequip random" << std::endl;
	me->unequip(42);
	std::cout << "use random" << std::endl;
	me->use(42, *bob);
	std::cout << "copy test" << std::endl;
	ICharacter *copy = new Character(*(Character*)me);
	copy->unequip(0);
	me->use(0, *bob);
	std::cout << "unknown materia" << std::endl;
	me->unequip(0);
	me->equip(src->createMateria("plouf"));
	me->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
