/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:04:30 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:30 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define	HARL_H

#include <string>
#include <iostream>

#define RS "\e[0;0m"
#define R "\e[0;31m"
#define G "\e[0;32m"
#define Y "\e[0;33m"
#define B "\e[0;34m"

class	Harl
{
	public :
	Harl();
	~Harl();

	void	complain( std::string level );

	private :
	void	debug( void );
	void	info( void );
	void	warning( void );
	void error( void );
};

typedef struct s_level
{
	std::string	level;
	void (Harl::*ptrflevel) (void);
} t_level;

#endif