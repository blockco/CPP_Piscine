#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed(const Fixed &obj): _num(obj._num)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int val )
{
	this->_num = val * (1 << this->_dig);
}

Fixed::Fixed( const float val )
{
	this->_num = roundf(val * (1 << this->_dig));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_num = fix._num;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_num;
}

void Fixed::setRawBits( int const raw )
{
	this->_num = raw;
}

float Fixed::toFloat( void ) const
{
	return((float)this->_num / (1 << this->_dig));
}

 int Fixed::toInt( void ) const
 {
	 return(this->_num / (1 << this->_dig));
 }

std::ostream& operator<<(std::ostream& out, const Fixed &s)
{
	out << s.toFloat();
	return out;
}
