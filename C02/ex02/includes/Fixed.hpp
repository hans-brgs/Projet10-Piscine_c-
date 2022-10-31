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

		//Overloading Comparison Operator
	bool	operator>(const Fixed& rhs);
	bool	operator<(const Fixed& rhs);
	bool	operator>=(const Fixed& rhs);
	bool	operator<=(const Fixed& rhs);
	bool	operator==(const Fixed& rhs);
	bool	operator!=(const Fixed& rhs);

		//Overloading Arithmetic Operator
	Fixed	operator+(const Fixed& rhs);
	Fixed	operator-(const Fixed& rhs);
	Fixed	operator*(const Fixed& rhs);
	Fixed	operator/(const Fixed& rhs);

		//Overloading Increment Operator
	Fixed&	operator++(void);	// Pre
	Fixed&	operator--(void);
	Fixed	operator++(int);	// Post
	Fixed	operator--(int);

		// Min max
	static Fixed	min(Fixed& a, Fixed& b);
	static Fixed	max(Fixed& a, Fixed& b);
	static Fixed	min(const Fixed& a, const Fixed& b);
	static Fixed	max(const Fixed& a, const Fixed& b);

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
