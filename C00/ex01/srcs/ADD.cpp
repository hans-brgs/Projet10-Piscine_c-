/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ADD.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:56:45 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/21 18:56:45 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "mycolor.hpp"
#include <stdlib.h>
#include <string>

static std::string check_input(std::string str)
{
	std::string input("");

	std::cout << U_W + str + RS " :	";
	std::getline(std::cin, input);
	while (input.length() == 0)
	{
		std::cout << R "Empty entry is not allowed !" << std::endl;
		std::cout << U_W + str + " :" RS " ";
		std::getline(std::cin, input);
	}
	return input;
}

PhoneBook add(PhoneBook phonebook)
{
	Contact contact;

	system("clear");
	std::cout << B_W "\n📇 ADD 📇" RS << std::endl;
	contact.setFirstName(check_input("First Name"));
	contact.setLastName(check_input("Last Name"));
	contact.setNickName(check_input("Nick Name"));
	contact.setPhone(check_input("Phone Number"));
	contact.setSecret(check_input("Secret"));

	phonebook.setContact(contact);
	return phonebook;
}