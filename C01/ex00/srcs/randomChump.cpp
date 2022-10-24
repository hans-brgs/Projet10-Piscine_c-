/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:42:27 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/24 17:42:27 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void 	randomChump(std::string name)
{
	Zombie *zombie;

	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
	return ;
}