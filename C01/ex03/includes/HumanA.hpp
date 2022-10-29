/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:27 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/25 17:12:27 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

/*
	Human A will always be armed. 
	So we can use a reference, 
	because the reference must be initialized when it is declared.
	Also, References cannot be NULL.
*/

class	HumanA
{
	public :
	HumanA(std::string name, Weapon &w);
	~HumanA();
	void	attack() const;

	private :
	std::string	_name;
	Weapon		&_w;
};

#endif
