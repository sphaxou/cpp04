/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:59:49 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:31:12 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat::~WrongCat()
{}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	type = src.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Nya" << std::endl;
}
