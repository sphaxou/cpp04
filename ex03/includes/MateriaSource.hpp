/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:56:40 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/17 02:17:23 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include <string>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*materia[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &src);

		void learnMateria(AMateria*);
		AMateria	*createMateria(std::string const &type);
};

#endif
