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
#include "FragTrap.hpp"

int	main ()
{
	std::string	target;
	std::cout << B_M "CLAP INITIALISATION :" RS << std::endl;
	ClapTrap	clap("Eliminator");

	std::cout << B_M "\nFRAG INITIALISATION :" RS << std::endl;
	FragTrap	frag("Supra Extra Eliminator");
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
	std::cout << B_M "\nFRAG ACTIONS :" RS << std::endl;
	frag.attack(target);
	frag.takeDamage(dmg);
	frag.beRepaired(dmg);
	frag.highFivesGuys();
	for (int i = 0; i < 50; i++)
	{
		frag.attack(target);
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << R "Mickey Mousse Attack !" RS << std::endl;
		frag.takeDamage(dmg);
	}
}