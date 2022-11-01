/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:00:25 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/31 18:00:25 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << RS "ClapTrap " B "Default constructor called" RS << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << RS "ClapTrap " B "String constructor called" RS << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << RS "ClapTrap " B "Destructor called" RS << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << RS "ClapTrap " B "Copy constructor called" RS << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout	<< this->_name
					<< G " attacks " RS << target
					<< G ", causing " << this->_attackDamage
					<< " points of damage!" RS << std::endl;
	}
	else
	{
		if (this->_energyPoints == 0)
			std::cout << R "Empty energy, you can no longer attack." RS << std::endl;
		else if (this->_hitPoints == 0)
			std::cout << R "You are dead, you can't attack." RS << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout	<< this->_name
					<< Y " loses " RS << amount
					<< Y " hits point." RS << std::endl;
		if (this->_hitPoints <= 0)
		{
			std::cout	<< this->_name
						<< R " Dies" RS << std::endl;
		}
	}
	else
	{
		if (this->_energyPoints == 0)
			std::cout << R "Empty energy, you can no longer attack." RS << std::endl;
		else if (this->_hitPoints == 0)
			std::cout << R "You are dead, you can't attack." RS << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout	<< this->_name
					<< G ", regains " RS << amount
					<< G " hit points."
					<< " Total hit point : " RS
					<< this->_hitPoints << std::endl;
		if (this->_energyPoints < 0)
		{
			std::cout	<< this->_name
						<< Y "has no more energy." RS << std::endl;
		}
	}
	else
	{
		if (this->_energyPoints == 0)
			std::cout << R "Empty energy, you can no longer repair yourself." RS << std::endl;
		else if (this->_hitPoints == 0)
			std::cout << R "You are dead, you can't repair yourself." RS << std::endl;
	}
	return ;
}


