/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:17:56 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 11:17:56 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	this->_type = "Dog"; 
	std::cout	<< RS "Dog " B "Default constructor called" RS << std::endl;
	return ;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout	<< RS "Dog " B "Destructor called" RS << std::endl;
	return ;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
	std::cout << RS "Dog " B "Copy constructor called" RS << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		delete this->_brain;						// Here we are on assignement, so we need to first delete _brain then
		this->_brain = new Brain(*rhs._brain);		// Allocate new Brain to copy src's brain.
		this->_type = rhs._type;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << G "Waouf Waouf Waouf" RS << std::endl;
	return ;
}

void	Dog::getIdeas()	const
{
	this->_brain->getIdeas();
	return ;
}