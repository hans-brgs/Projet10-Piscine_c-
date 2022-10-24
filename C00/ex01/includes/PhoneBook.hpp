/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 06:59:42 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/21 06:59:42 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public :
	// Constructeur & Destructeur
	PhoneBook(); // Role -> initialiser les attributs.
	~PhoneBook(); // Role -> désallouer la mémoire.

	// Getters
	Contact getContact(int index) const;	// Méthode constante "const" : 
											// Utilisé pour les méhtodes qui ne modifie pas l'objet.
	int getCount() const;			
	
	// Setters
	void setContact(Contact contact);

	private:
	Contact			_contacts[8];
	int				_index;
	static int		_counter;

};

#endif