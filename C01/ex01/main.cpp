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
	Zombie	*horde;
	int		i;
	int		N;

	N = 10;
	i = 0;
	horde = zombieHorde(N, "MechantMechant");
	
	std::cout	<< G "Zombie horde with "
				<< N
				<< " members :" RS 
				<< std::endl;
	while(i < N)
	{
		std::cout << Y "[" << i + 1 << "]	" RS;
		horde[i].announce();
		i++;
	}
	std::cout << R "\nDelete horde" RS << std::endl;
	delete [] horde;
	return (0);
}