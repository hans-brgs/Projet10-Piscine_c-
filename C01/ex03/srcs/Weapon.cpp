/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:42:48 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/25 17:42:48 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void				Weapon::setType(std::string type) 
{
	this->_type = type;
	return ;
}
