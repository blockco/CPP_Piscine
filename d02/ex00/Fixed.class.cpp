#include "Fixed.class.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_num = 0;
}

Fixed::Fixed(const Fixed &obj) _num(obj._num)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& operator= (const Fixed &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	_num = fix._num;
}

int getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _num;
}

void setRawBits( int const raw )
{
	_num = raw;
}
