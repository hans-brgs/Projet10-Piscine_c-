/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:32 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 17:42:32 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"
#define B "\e[0;34m"
#define B_M "\e[1;35m"

class WrongAnimal 
{
	public :
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	WrongAnimal& operator=(const WrongAnimal& rhs);

	//Members
	void		makeSound() const;
	std::string	getType() const;

	protected :
	std::string _type;
};

#endif