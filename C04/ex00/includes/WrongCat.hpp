/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:35 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 17:42:35 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& src);
	WrongCat& operator=(const WrongCat& rhs);

	//Members
	void makeSound() const;
};

#endif