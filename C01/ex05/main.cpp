/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:49:51 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/26 17:49:51 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;

	std::cout << "Level : WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout  << std::endl;

	std::cout << "Level : ERROR" << std::endl;
	harl.complain("ERROR");
	std::cout  << std::endl;

	std::cout << "Level : DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout  << std::endl;

	std::cout << "Level : INFO" << std::endl;
	harl.complain("INFO");
	std::cout  << std::endl;
	return 0;
}