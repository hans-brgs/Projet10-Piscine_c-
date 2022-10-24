/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 06:59:39 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/21 06:59:39 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact
{
	public:
	Contact();
	~Contact();

	// Getteur
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhone() const;
	std::string getSecret() const;

	// Setteur
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setPhone(std::string phone);
	void setSecret(std::string secret);

	private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phone;
	std::string _secret;
};

#endif