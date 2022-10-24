/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:21:01 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/21 07:21:01 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::_counter = 0;

PhoneBook::PhoneBook() : _index(0)
{

}

PhoneBook::~PhoneBook()
{

}

Contact PhoneBook::getContact(int index) const
{
	return (this->_contacts[index]);
}

int PhoneBook::getCount() const
{
	return (_counter);
}

void PhoneBook::setContact(Contact contact)
{
	this->_contacts[this->_index] = contact;
	this->_index = (this->_index + 1) % 8;
	if (_counter < 8)
		_counter++;
	return;
}




