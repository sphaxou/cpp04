/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:59:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 18:01:05 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor" << std::endl;
	brain = new Brain();
	*this = src;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignator" << std::endl;
	type = src.type;
	*brain = *(src.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Nya" << std::endl;
}

Brain *Cat::getBrain()const
{
	return (brain);
}
