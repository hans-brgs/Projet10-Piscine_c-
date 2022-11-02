/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:25:47 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/02 11:25:47 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"
#define B "\e[0;34m"
#define B_M "\e[1;35m"

class Brain
{
	public :
	Brain();
	~Brain();
	Brain(const Brain& src);
	Brain& operator=(const Brain& rhs);

	//member
	void	getIdeas() const;

	private :
	std::string _ideas[100];
};

#endif