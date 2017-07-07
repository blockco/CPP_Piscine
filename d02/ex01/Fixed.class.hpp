#include <iostream>

class Fixed{
public:
	Fixed();
	Fixed( const int val );
	Fixed( const float val );
	Fixed( const Fixed &obj );
	~Fixed();
	Fixed& operator= (const Fixed &fix);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int _num;
	static const int _dig = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed &s);
