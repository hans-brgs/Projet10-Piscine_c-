/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:06:18 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 11:06:18 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout	<< RS "Animal " B "Default constructor called" RS << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout	<< RS "Animal " B "Destructor called" RS << std::endl;
	return ;
}

Animal::Animal(const Animal& src) : _type(src._type)
{
	std::cout << RS "Animal " B "Copy constructor called" RS << std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	Animal::getType() const
{
	return (this->_type);
}


