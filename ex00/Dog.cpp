/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:59:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:12:07 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog::~Dog()
{}

Dog	&Dog::operator=(const Dog &src)
{
	type = src.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
