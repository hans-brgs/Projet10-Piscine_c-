/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:44:11 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 08:44:11 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor, Destructor
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << RS "ScavTrap " B "Default constructor called" RS << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << RS "ScavTrap " B "String constructor called" RS << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << RS "ScavTrap " B "Destructor called" RS << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << RS "ScavTrap " B "Copy constructor called" RS << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_name = rhs._name;
	}
	/* 
	Equivalent to : 
		ClapTrap::operator=(rhs);
	*/
	return *this;
}

// members
void ScavTrap::guardGate()
{
	std::cout << RS "ScavTrap " G "enters gatekeeper mode" RS << std::endl;
	return ;
}