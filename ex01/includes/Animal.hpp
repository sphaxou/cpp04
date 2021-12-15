/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:51:33 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 17:28:20 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include "Brain.hpp"
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &);
		virtual	~Animal();

		Animal &operator=(const  Animal &);

		virtual void makeSound()const;
		virtual Brain	*getBrain()const = 0;
		std::string	getType()const;
};
#endif
