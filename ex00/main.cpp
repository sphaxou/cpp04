/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:05:27 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:36:25 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *k = new WrongAnimal();
	const WrongAnimal *l = new WrongCat();

	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << k->getType() << std::endl;
	std::cout << l->getType() << std::endl;
	k->makeSound();
	l->makeSound();
	return (0);
}
