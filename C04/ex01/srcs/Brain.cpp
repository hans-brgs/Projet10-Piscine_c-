/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:42:48 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/02 11:42:48 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::string	num;
	std::string tmp;
	int			i_bis;

	for (int i(0); i < 100; i++)
	{
		num = "";
		i_bis = i + 1;
		while (i_bis > 0)
		{
			tmp = ('0' + (i_bis % 10));
			num = tmp + num;
			i_bis /=  10;
		}
		this->_ideas[i] = "idea" + num;
	}
	std::cout	<< RS "Brain " B "Default constructor called" RS << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout	<< RS "Brain " B "Destructor called" RS << std::endl;
	return ;
}

Brain::Brain(const Brain& src) : _ideas(src._ideas)
{
	std::cout << RS "Brain " B "Copy constructor called" RS << std::endl;
	return ;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		for (int i(0); i < 100; i++)
			this->_ideas[i] = "idea";
	}
	return *this;
}

void Brain::getIdeas() const
{
	for (int i(0); i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
	return ;
}