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
#include "ScavTrap.hpp"

int	main ()
{
	std::string	target;
	std::cout << B_M "CLAP INITIALISATION :" RS << std::endl;
	ClapTrap	clap("Eliminator");

	std::cout << B_M "\nSCAV INITIALISATION :" RS << std::endl;
	ScavTrap	scav("Supra Eliminator");
	int			dmg;

	dmg = 5;
	target = "Mickey Mousse";

	std::cout << B_M "\nCLAP ACTIONS :" RS << std::endl;
	clap.attack(target);
	clap.takeDamage(dmg);
	clap.beRepaired(dmg);
	for (int i = 0; i < 10; i++)
	{
		clap.attack(target);
	}
	clap.takeDamage(dmg);
	clap.takeDamage(dmg);

	dmg = 10;
	std::cout << B_M "\nSCAV ACTIONS :" RS << std::endl;
	scav.attack(target);
	scav.takeDamage(dmg);
	scav.beRepaired(dmg);
	scav.guardGate();
	for (int i = 0; i < 50; i++)
	{
		scav.attack(target);
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << R "Mickey Mousse Attack !" RS << std::endl;
		scav.takeDamage(dmg);
	}
}