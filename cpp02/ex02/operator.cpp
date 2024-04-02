
#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &output, const Fixed & rhs)
{
	output << rhs.toFloat();
	return output;
}

Fixed	Fixed::operator+(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value + nbr.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value - nbr.getRawBits());
	return tmp;
}
Fixed	Fixed::operator*(const Fixed &nbr)
{
	Fixed	tmp;
	
	tmp.setRawBits((int)((float)this->_value * (float)nbr._value / ( 1 << this->_dot)));
	return tmp;
}
Fixed	Fixed::operator/(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits((int)((float)this->_value / (float)nbr._value * ( 1 << this->_dot)));
	return tmp;
}

Fixed	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}