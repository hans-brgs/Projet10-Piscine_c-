/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:51:12 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 09:51:12 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << RS "FragTrap " B "Default constructor called" RS << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout	<< RS "FragTrap -> "
				<< B "name : " RS << this->_name
				<< B " | Hit points : " RS << this->_hitPoints 
				<< B " | Energy points : " RS << this->_energyPoints 
				<< B " | Attack damage : " RS << this->_attackDamage
				<< std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << RS "FragTrap " B "String constructor called" RS << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout	<< RS "FragTrap -> "
				<< B "name : " RS << this->_name
				<< B " | Hit points : " RS << this->_hitPoints 
				<< B " | Energy points : " RS << this->_energyPoints 
				<< B " | Attack damage : " RS << this->_attackDamage
				<< std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout	<< RS "FragTrap " B "Destructor called" RS << std::endl;
	std::cout	<< RS "FragTrap -> "
				<< B "name : " RS << this->_name
				<< B " | Hit points : " RS << this->_hitPoints 
				<< B " | Energy points : " RS << this->_energyPoints 
				<< B " | Attack damage : " RS << this->_attackDamage
				<< std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout 	<< RS "FragTrap " B "Copy constructor called" RS << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

//Member
void	FragTrap::highFivesGuys()
{
	std::cout 	<< G "High Fives, Guys ?" RS << std::endl;
	return ;
};