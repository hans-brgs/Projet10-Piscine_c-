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

// Constrcutor
Fixed::Fixed() : _fixed(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int i)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed = i << this->numbersOfBits;
	return ;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixed = (int)(roundf(f * (1 << this->numbersOfBits)));
	return ;
}

// Destrcutor
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

// Copy Constructor (instanciation)
Fixed::Fixed(const Fixed &src) : _fixed(src._fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}

// Copy Assignement  operator (coyp after instanciation)
Fixed&	Fixed::operator=(const Fixed &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	return *this ;
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

// Member
void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

// Overloading Operator (extern function)
std::ostream &	operator<<(std::ostream & out, Fixed const & i) {
	out << i.toFloat();
	return (out);
}

// Overloading Operator (public member)
bool	Fixed::operator>(const Fixed& rhs)
{
	return (this->_fixed > rhs._fixed);
}

bool	Fixed::operator<(const Fixed& rhs)
{
	return (this->_fixed < rhs._fixed);
}

bool	Fixed::operator>=(const Fixed& rhs)
{
	return (this->_fixed >= rhs._fixed);
}

bool	Fixed::operator<=(const Fixed& rhs)
{
	return (this->_fixed <= rhs._fixed);
}

bool	Fixed::operator==(const Fixed& rhs)
{
	return (this->_fixed == rhs._fixed);
}

bool	Fixed::operator!=(const Fixed& rhs)
{
	return (this->_fixed != rhs._fixed);
}

//Overloading Arithmetic Operator
Fixed	Fixed::operator+(const Fixed& rhs)
{
	Fixed tmp;

	tmp._fixed = this->_fixed + rhs._fixed;
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	Fixed tmp;

	tmp._fixed = this->_fixed - rhs._fixed;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	Fixed tmp;

	tmp._fixed = ((long long)this->_fixed * rhs._fixed) >> numbersOfBits;
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	Fixed tmp;

	tmp._fixed = ((long long)this->_fixed << numbersOfBits) / rhs._fixed;
	return (tmp);
}

		//Overloading Increment Operator
Fixed&	Fixed::operator++(void) // Pre
{
	this->_fixed++;
	return (*this);
}

Fixed&	Fixed::operator--(void) // Pre
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	this->_fixed++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	this->_fixed--;
	return (tmp);
}

// Min Max
Fixed	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return(a);
	else
		return(b);
}

Fixed	Fixed::max(Fixed& a, Fixed& b)
{
	if (b > a)
		return(b);
	else
		return(a);
}

Fixed	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._fixed < b._fixed)
		return(a);
	else
		return(b);
}

Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._fixed > b._fixed)
		return(a);
	else
		return(b);
}