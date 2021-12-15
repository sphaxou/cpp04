/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:00:10 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:19:25 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog&);
		~Dog();

		Dog &operator=(const Dog &);

		virtual void	makeSound()const;
};

#endif
