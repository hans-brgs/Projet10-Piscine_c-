/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:11:56 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/26 17:11:56 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug()
{
	std::cout	<< B "The bodybuilder has reached muscle failure." RS << std::endl;
	return ;
}

void	Harl::info()
{
	std::cout	<< G "Muscular failure occurs when the athlete's "
				<< "neuromuscular capacity no longer allows "
				<< "them to produce sufficient force to move " 
				<< "the external load." RS << std::endl;
	return ;
}

void	Harl::warning()
{
	std::cout	<< Y "Beware, the bodybuilder is one repetition "
				<< "away from muscular failure." RS << std::endl;
	return ;
}

void	Harl::error()
{
	std::cout	<< R "Failure of repetition!" RS << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	t_level lvl[4] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	for (int i = 0; i < 4; i++)
	{
		if (lvl[i].level == level)
			(this->*lvl[i].ptrflevel)();
	}
	return ;
}
