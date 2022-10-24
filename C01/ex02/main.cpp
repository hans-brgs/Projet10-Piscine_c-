/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:56:52 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/24 19:56:52 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"

int	main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string	&stringREF(str);
	std::string	*stringPTR;

	stringPTR = &str;

	std::cout << G "Memory address of the string variable :\n	" RS;
	std::cout << &str << std::endl;
	std::cout << G "The memory address held by stringPTR :\n	" RS;
	std::cout << stringPTR << std::endl;
	std::cout << G "The memory address held by stringREF :\n	" RS;
	std::cout << &stringREF << std::endl;

		std::cout << Y "\nThe value of the string variable :\n	" RS;
	std::cout << str << std::endl;
	std::cout << Y "The value pointed to by stringPTR :\n	" RS;
	std::cout << *stringPTR << std::endl;
	std::cout << Y "The value pointed to by stringREF :\n	" RS;
	std::cout << stringREF << std::endl;
	return 0;
}