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

Fixed Fixed::operator+(const Fixed &fix1)
{
	return(Fixed(this->getRawBits() + fix1.getRawBits()));
}

Fixed Fixed::operator-(const Fixed &fix1)
{
	return(Fixed(this->getRawBits() + fix1.getRawBits()));
}

bool Fixed::operator>(const Fixed &fix1)
{
	return(this->getRawBits() > fix1.getRawBits());
}

bool Fixed::operator>=(const Fixed &fix1)
{
	return(this->getRawBits() >= fix1.getRawBits());
}

bool Fixed::operator<(const Fixed &fix1)
{
	return(this->getRawBits() < fix1.getRawBits());
}

bool Fixed::operator<=(const Fixed &fix1)
{
	return(this->getRawBits() <= fix1.getRawBits());
}

Fixed Fixed::operator/(const Fixed &fix1)
{
	return(Fixed(this->toFloat() / fix1.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fix1)
{
	return(Fixed(this->toFloat() * fix1.toFloat()));
}

Fixed &Fixed::operator++(void) //pre
{
	this->_num++;
	return (*this);
}

Fixed Fixed::operator++(int) //post
{
	Fixed tmp(*this);
	this->_num++;
	return tmp;
}

Fixed &Fixed::operator--(void) //pre
{
	this->_num--;
	return (*this);
}

Fixed Fixed::operator--(int) //post
{
	Fixed tmp(*this);
	this->_num--;
	return tmp;
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

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}
