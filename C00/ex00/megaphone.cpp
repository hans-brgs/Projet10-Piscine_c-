/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:55:58 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/18 17:55:58 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string ft_strup(char *str)
{
	std::string strup;
	int i;

	i = 0;
	strup = str;
	while(str[i])
	{
		strup[i] = toupper(str[i]);
		i++;
	}
	return (strup);
}

int	main(int argc, char **argv)
{
	int i(0);

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
		std::cout << ft_strup(argv[i]);
	std::cout << std::endl;
	return 0;
}