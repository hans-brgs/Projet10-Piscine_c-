/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:25 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 17:42:25 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout	<< RS "WrongAnimal " B "Default constructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout	<< RS "WrongAnimal " B "Destructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src._type)
{
	std::cout << RS "WrongAnimal " B "Copy constructor called" RS << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

//Members
void		WrongAnimal::makeSound() const
{
	std::cout << RS "WrongAnimal :" G "Wrong Sound" RS << std::endl;
	return;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}