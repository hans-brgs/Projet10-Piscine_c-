/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:06:43 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/21 11:06:43 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "action.hpp"
#include "mycolor.hpp"
#include <stdlib.h>

static void prompt()
{
	std::cout << "\nSelect one of the following three actions:" << std::endl;
	std::cout << "	-" B_B "ADD" RS ": save a new contact" << std::endl;
	std::cout << "	-" B_B "SEARCH" RS ": display a specific contact" << std::endl;
	std::cout << "	-" B_B "EXIT" RS ": Exit PhoneBook" << std::endl;
}

int main()
{
	std::string cmd("");
	PhoneBook phonebook;

	while (1)
	{
		system("clear");
		prompt();
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook = add(phonebook);
		else if (cmd == "SEARCH")
			search(phonebook);
		else if (cmd == "EXIT")
			break;
	}
}