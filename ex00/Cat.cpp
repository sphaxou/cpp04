/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:59:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:22:04 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	type = "Cat";
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat::~Cat()
{}

Cat	&Cat::operator=(const Cat &src)
{
	type = src.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Nya" << std::endl;
}
