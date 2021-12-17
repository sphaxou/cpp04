/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:41:52 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/17 02:40:13 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include "Character.hpp"

class IMateriaSource;

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		AMateria	&operator=(AMateria const &);

		std::string const & getType() const; //Returns the materia type
			
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &src);
		~Ice();

		Ice	&operator=(const Ice &src);
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &src);
		~Cure();

		Cure	&operator=(const Cure &src);
	
	public:
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
#endif
