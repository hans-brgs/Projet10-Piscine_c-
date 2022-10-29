/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:00:49 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/25 17:00:49 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class	Weapon
{
	public :
	Weapon(std::string	type);
	~Weapon();
	const std::string	&getType();
	void				setType(std::string type);

	private :
	std::string	_type;
};

#endif