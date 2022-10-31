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

class Fixed
{
	public :
	Fixed();
	Fixed(const Fixed &src);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private :
	int					_rawBits;
	static const int	numbersOfBits;
};

#endif
