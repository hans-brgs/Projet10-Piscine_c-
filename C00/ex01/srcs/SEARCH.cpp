/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SEARCH.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:59:03 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/21 18:59:03 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "mycolor.hpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <iomanip>

static std::string truncated(std::string str)
{
	std::string out;

	if (str.length() > 9)
		out = str.substr(0,9) + ".";
	else
		out = str;
	return out;
}

static int select_indice(int count)
{
	int			num;
	std::string	input;
	
	num = 0;
	while (num > count || num < 1)
	{
		std::cout << B_G "Select indice between 1 & " << count << ":" << RS << std::endl;
		std::getline(std::cin, input);
		num = atoi(input.c_str());
	}
	return num;
}

static void display_phonebook(Contact contact, PhoneBook phonebook, int count)
{
	int i;
	std::string 			trunc;

	i = 1;
	std::cout << B_W "\n🔎 SEARCH 🔍" RS << std::endl;
	while (i <= count)
	{
		contact = phonebook.getContact(i - 1);
		std::cout << std::right << std::setw(10) << i;
		std::cout << '|';
		trunc = truncated(contact.getFirstName());
		std::cout << std::right << std::setw(10) << trunc;
		std::cout << '|';
		trunc = truncated(contact.getLastName());
		std::cout << std::right << std::setw(10) << trunc;
		std::cout << '|';
		trunc = truncated(contact.getNickName());
		std::cout << std::right << std::setw(10) << trunc;
		std::cout << '|' << std::endl;
		i++;
	}
}

static void display_contact(Contact contact, PhoneBook phonebook, int num)
{
	std::string	input("no empty");

	contact = phonebook.getContact(num - 1);
	std::cout << U_W "First Name" RS " :	" << contact.getFirstName() << std::endl;
	std::cout << U_W "Last Name" RS " :	" << contact.getLastName() << std::endl;
	std::cout << U_W "Nick Name" RS " :	" << contact.getNickName() << std::endl;
	std::cout << U_W "Phone Number" RS " :	" << contact.getPhone() << std::endl;
	std::cout << U_W "Secret" RS " :	" << contact.getSecret() << std::endl;
	while (input.length() != 0)
	{
		std::cout << B_B "\n [ENTER] to go back to menu" RS << std::endl;
		std::getline(std::cin, input);
	}
}

void search(PhoneBook phonebook)
{
	std::string		input;
	Contact			contact;
	int				count;
	int				num;

	system("clear");
	count = phonebook.getCount();
	if (count == 0)
	{
		std::cout << M "\n😿 Sorry, you don't have any friends." RS << std::endl;
		std::cout << B_B "\n [ENTER] to go back to menu" RS << std::endl;
		std::getline(std::cin, input);
		return;
	}
	display_phonebook(contact, phonebook, count);
	num = select_indice(count);
	display_contact(contact, phonebook, num);
}