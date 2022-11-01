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
	this->_type = "Cat";
	std::cout	<< RS "Cat " B "Default constructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout	<< RS "Cat " B "Destructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << RS "Cat " B "Copy constructor called" RS << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << G "Miaaaaou Miaouuu" RS << std::endl;
	return ;
}
