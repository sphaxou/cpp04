/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 02:02:17 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/17 02:41:40 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i=0;i<4;i++)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i=0;i<4;i++)
		if (materia[i])
			delete materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	for (int i=0;i<4;i++)
	{
		if (materia[i])
			delete materia[i];
		materia[i] = src.materia[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i=0;i<4;i++)
	{
		if (!materia[i])
		{
			materia[i] = m->clone();
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i=0; i<4;i++)
	{
		if (materia[i] && type == materia[i]->getType())
			return (materia[i]->clone());
	}
	return (0);
}
