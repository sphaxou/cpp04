/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:53:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:37:35 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

// Constructors
WrongAnimal::WrongAnimal()
{}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

// Destructor
WrongAnimal::~WrongAnimal()
{}

// Overload
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	type = src.type;
	return (*this);
}

// getter
std::string	WrongAnimal::getType()const
{
	return (type);
}

// Fonctions membres
void	WrongAnimal::makeSound()const
{
	std::cout << "Meuh Beeh or w/e" << std::endl;
}
