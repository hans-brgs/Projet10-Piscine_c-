/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:19:36 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/21 09:19:36 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

// Getteur
std::string Contact::getFirstName() const
{
	return(this->_firstName);
}

std::string Contact::getLastName() const
{
	return(this->_lastName);
}

std::string Contact::getNickName() const
{
	return(this->_nickName);
}

std::string Contact::getPhone() const
{
	return(this->_phone);
}

std::string Contact::getSecret() const
{
	return(this->_secret);
}


// Setteur
void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return;
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return;
}

void Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
	return;
}

void Contact::setPhone(std::string phone)
{
	this->_phone = phone;
	return;
}

void Contact::setSecret(std::string secret)
{
	this->_secret = secret;
	return;
}