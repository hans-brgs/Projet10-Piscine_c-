/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:26:07 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/24 17:26:07 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"

int main()
{
	std::cout << G "Allocate zombie1 on Stack" RS << std::endl;
	Zombie zombie1("zombie1");			//Allocate on Stack during compilation
	zombie1.announce();	

	std::cout << Y "\nAllocate zombie2 on Heap" RS << std::endl;
	Zombie	*zombie2;		
	zombie2 = newZombie("zombie2");		//Allocate on Heap during execution of instruction
	zombie2->announce();
	
	std::cout << Y "\nAllocate zombie3 on Heap" RS << std::endl;
	randomChump("zombie3");				//Allocate on Heap during execution of instruction
	
	std::cout << R "\nDelete all" RS << std::endl;
	delete zombie2;
	return (0);
}