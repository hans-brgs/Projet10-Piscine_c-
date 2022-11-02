/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:03:34 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 11:03:34 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public :
	Cat();
	virtual ~Cat();
	Cat(const Cat& src);
	Cat& operator=(const Cat& src);

	//Members
	virtual void	makeSound() const;
	void			getIdeas() const;

	private :
	Brain* _brain;
};

#endif