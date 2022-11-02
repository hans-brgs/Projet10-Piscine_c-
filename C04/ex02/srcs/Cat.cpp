/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:14:55 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 11:14:55 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_brain = new Brain();
	this->_type = "Cat";
	std::cout	<< RS "Cat " B "Default constructor called" RS << std::endl;
	return ;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout	<< RS "Cat " B "Destructor called" RS << std::endl;
	return ;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
	std::cout << RS "Cat " B "Copy constructor called" RS << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
		this->_type = rhs._type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << G "Miaaaaou Miaouuu" RS << std::endl;
	return ;
}

void	Cat::getIdeas()	const
{
	this->_brain->getIdeas();
	return ;
}
