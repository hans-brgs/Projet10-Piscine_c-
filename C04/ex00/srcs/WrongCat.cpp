/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:28 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 17:42:28 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "Cat";
	std::cout	<< RS "Cat " B "Default constructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout	<< RS "WrongCat " B "Destructor called" RS << std::endl
				<< B "Type : " RS << this->_type << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << RS "WrongCat " B "Copy constructor called" RS << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

//Members
void	WrongCat::makeSound() const
{
	std::cout << G "Miaaaaou Miaouuu" RS << std::endl;
	return ;
}