
#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &nbr)
{
	*this = nbr;
}

Fixed::Fixed(const int nbr)
{
	this->_value = nbr << this->_dot;
}

Fixed::Fixed(const float nbr)
{
	this->_value = roundf(nbr * (1 << this->_dot));
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt() const
{
	return (this->_value >> this->_dot);
}

float Fixed::toFloat() const
{
	return (float)(this->_value) / (1 << this->_dot);
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}
