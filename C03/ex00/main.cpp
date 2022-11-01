/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:36:12 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/31 18:36:12 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ()
{
	std::string	target;
	ClapTrap	trap("Eliminator");
	int			dmg;

	dmg = 5;
	target = "Mickey Mousse";

	trap.attack(target);
	trap.takeDamage(dmg);
	trap.beRepaired(dmg);
	for (int i = 0; i < 10; i++)
	{
		trap.attack(target);
	}
	std::cout << R "Mickey Mousse Attack !" RS << std::endl;
	trap.takeDamage(dmg);
	std::cout << R "Mickey Mousse Attack !" RS << std::endl;
	trap.takeDamage(dmg);
}