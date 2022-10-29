/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:39:34 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/25 17:39:34 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
	Note to self: It is important to initialise all attributes of a class.	
	In this case, if I don't initialise _w to NULL,
	*_w contains the address of the HumanA's _w,
	even though it was not assigned an address.
*/

HumanB::HumanB(std::string	name) : _name(name), _w(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack() const
{
	std::cout	<< _name
				<< " attacks with their ";
	if (this->_w)
		std::cout << this->_w->getType() << std::endl;
	else
		std::cout << "fists" << std::endl;
		
	return ;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->_w = &w;
	return ;
}