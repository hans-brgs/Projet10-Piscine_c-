/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:12:57 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/29 14:12:57 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::numbersOfBits = 8;

Fixed::Fixed() : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = i << this->numbersOfBits;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = (int)(roundf(f * (1 << this->numbersOfBits)));
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src) : _fixed(src._fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	return *this ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	float	tmp;
	tmp = ((float)(this->_fixed) / (1 << this->numbersOfBits));
	return (tmp);
}

int		Fixed::toInt(void) const
{
	int	tmp;
	tmp = this->_fixed >> this->numbersOfBits;
	return (tmp);
}

std::ostream &	operator<<(std::ostream & out, Fixed const & i) {
	out << i.toFloat();
	return (out);
}
