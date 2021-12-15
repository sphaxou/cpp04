/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:00:10 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 16:21:30 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat&);
		~Cat();

		Cat &operator=(const Cat &);

		virtual void	makeSound()const;
};

#endif
