/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:33:45 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/17 03:09:40 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	nb_equip = 0;
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string &name)
{
	nb_equip = 0;
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
	this->name = name;
}

Character::Character(const Character &src)
{
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
	*this = src;
}

Character::~Character()
{
	for (int i=0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];

}

Character &Character::operator=(const Character &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete (inventory[i]);
		inventory[i] = src.inventory[i]->clone();
	}
	nb_equip = src.nb_equip;
	name = src.name;
	return (*this);
}

const std::string &Character::getName() const
{
	return(name);
}

void	Character::equip(AMateria *m)
{
	for (int i=0; i < 4; i++)
		if (inventory[i] == m)
			return ;
	for (int i=0; i < 4; i++)
		if (!inventory[i])
		{
			inventory[i] = m;
			nb_equip++;
			return ;
		}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	if (inventory[idx])
		nb_equip--;
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 4 &&  idx >= 0 && inventory[idx])
		inventory[idx]->use(target);
}
