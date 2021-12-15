/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:53:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:13:45 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{}

Animal::Animal(const Animal &src)
{
	*this = src;
}

// Destructor
Animal::~Animal()
{}

// Overload
Animal	&Animal::operator=(const Animal &src)
{
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
{}
