/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:39:25 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 08:39:25 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
	// Constructor, Destructor
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	ScavTrap& operator=(const ScavTrap& rhs);
	~ScavTrap();

	// members
	void guardGate();
}; 

#endif