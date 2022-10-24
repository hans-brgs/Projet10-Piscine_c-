/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:16:16 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/24 17:16:16 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <vector>

class Zombie 
{
	public :
	Zombie();
	~Zombie();
	void	setName(std::string name);
	void	announce (void);

	private :
	std::string _name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif