/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:05:27 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 18:06:51 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	Animal *tab[10];
	for(int	i = 0; i < 10; i++)
	{
		if (i % 2)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
		std::cout << i << tab[i]->getType() << std::endl;
	}
	std::cout << "CONSTRUCTOR ENDED\n" << std::endl << std::endl << "TESTING DEEP COPY" << std::endl;
	Cat a;
	Brain *brain = a.getBrain();
	brain->idea[0] = "Manger";
	Cat cpy = a;
	brain->idea[0] = "Dormir";
	std::cout << a.getBrain()->idea[0] << std::endl << cpy.getBrain()->idea[0] << std::endl;
	std::cout << "DEEP COPY ENDED\n\nDESTRUCTOR LOOP"<< std::endl;
	for (int i = 0; i < 10; i++)
		delete tab[i];
	std::cout << "LOOP ENDED\n\nDESTROYING DEEP COPY" << std::endl;
	return (0);
}
