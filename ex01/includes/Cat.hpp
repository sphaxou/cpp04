/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:00:10 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/15 17:28:09 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
	private:
		Brain	*brain;

	public:
		Cat();
		Cat(const Cat&);
		~Cat();

		Cat &operator=(const Cat &);

		virtual void	makeSound()const;
		virtual Brain	*getBrain() const;
};

#endif
