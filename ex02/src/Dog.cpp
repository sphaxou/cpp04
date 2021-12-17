/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:59:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 18:01:41 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor" << std::endl;
	brain = new Brain();
	*this = src;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignator" << std::endl;
	type = src.type;
	*brain = *(src.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Brain	*Dog::getBrain()const
{
	return (brain);
}
