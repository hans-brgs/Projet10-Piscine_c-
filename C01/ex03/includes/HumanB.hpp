/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:16:28 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/25 17:16:28 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

/*
	Human B may not always be armed. 
	So we can use a pointer, 
	because a pointer can be changed to point to any variable of the same type.
	Also, pointer can be assigned to point to a NULL value.
*/

class	HumanB
{
	public :
	HumanB(std::string	name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &w);

	private :
	std::string	_name;
	Weapon		*_w;
};

#endif
