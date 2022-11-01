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

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout	<< RS "Dog " B "Default constructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout	<< RS "Dog " B "Destructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << RS "Dog " B "Copy constructor called" RS << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << G "Waouf Waouf Waouf" RS << std::endl;
	return ;
}