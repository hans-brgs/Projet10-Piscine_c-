/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:44:09 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/31 17:44:09 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"
#define B "\e[0;34m"

class ClapTrap
{
	public :
	// Constructor, Destructor, Copy Initialisation, assignement
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &src);
	ClapTrap& operator=(const ClapTrap& rhs);

	// Members
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private :
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif