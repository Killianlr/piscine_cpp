
#include "Fixed.hpp"

bool	Fixed::operator>(const Fixed &nbr) const
{
	return (this->_value > nbr.getRawBits());
}

bool	Fixed::operator<(const Fixed &nbr) const
{
	return (this->_value < nbr.getRawBits());
}

bool	Fixed::operator>=(const Fixed &nbr) const
{
	return (this->_value >= nbr.getRawBits());
}

bool	Fixed::operator<=(const Fixed &nbr) const
{
	return (this->_value <= nbr.getRawBits());
}

bool	Fixed::operator==(const Fixed &nbr) const
{
	return (this->_value == nbr.getRawBits());
}

bool	Fixed::operator!=(const Fixed &nbr) const
{
	return (this->_value != nbr.getRawBits());
}

Fixed &	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}
const Fixed &	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}