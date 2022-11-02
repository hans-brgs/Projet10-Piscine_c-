/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:05:49 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 11:05:49 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
	Dog();
	virtual ~Dog();
	Dog(const Dog& src);
	Dog& operator=(const Dog& src);

	//Members
	virtual void	makeSound() const;
	void			getIdeas() const;

	private:
	Brain* _brain;

};

#endif