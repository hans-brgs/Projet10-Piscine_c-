/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:59:03 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/29 13:59:03 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	public :
	// Constructor
	Fixed();
	Fixed(int const i);
	Fixed(float const f);

	// Copy
	Fixed(const Fixed &src);
	Fixed& operator=(const Fixed& rhs);

	//Destructor
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private :
	int					_fixed;
	static const int	numbersOfBits;
};

std::ostream& operator<<(std::ostream & out, Fixed const & i);

#endif
