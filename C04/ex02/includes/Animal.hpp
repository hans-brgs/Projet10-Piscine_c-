/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:58:40 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 10:58:40 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"
#define B "\e[0;34m"
#define B_M "\e[1;35m"

class Animal
{
	public :
	Animal();
	virtual ~Animal();
	Animal(const Animal& src);
	Animal& operator=(const Animal& rhs);

	//Members
	virtual void	makeSound() const = 0;
	std::string		getType() const;

	protected:
	std::string	_type;

};

#endif