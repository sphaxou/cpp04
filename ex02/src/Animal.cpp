/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:53:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:50:13 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
// Constructors
Animal::Animal()
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

// Overload
Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignator" << std::endl;
	type = src.type;
	return (*this);
}

// getter
std::string	Animal::getType()const
{
	return (type);
}

// Fonctions membres
void	Animal::makeSound()const
{
	std::cout << "Meuh Beeeh or w/e" << std::endl;
}
