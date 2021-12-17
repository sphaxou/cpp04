/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:49:24 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/17 02:41:12 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>

// AMateria
AMateria::AMateria()
{}

AMateria::AMateria(const std::string &t)
{
	type = t;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria()
{}

AMateria	&AMateria::operator=(AMateria const &src)
{
	type = src.type;
	return (*this);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}

const std::string &AMateria::getType() const
{
	return(type);
}

// Ice

Ice::Ice()
{
	type = "ice";
}

Ice::Ice(const Ice &src)
{
	*this = src;
}

Ice::~Ice()
{}

Ice &Ice::operator=(const Ice &src)
{
	type = src.type;
	return (*this);
}

AMateria* Ice::clone()const
{
	AMateria *cpy = new Ice(*this);
	return (cpy);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// Cure

Cure::Cure()
{
	type = "cure";	
}

Cure::Cure(const Cure &src)
{
	*this = src;
}

Cure::~Cure()
{}

Cure &Cure::operator=(const Cure &src)
{
	type = src.type;
	return (*this);
}

AMateria* Cure::clone()const
{
	AMateria *cpy = new Cure(*this);
	return (cpy);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
