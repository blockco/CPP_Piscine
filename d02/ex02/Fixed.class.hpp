#include <iostream>

class Fixed{
public:
	Fixed();
	Fixed( const int val );
	Fixed( const float val );
	Fixed( const Fixed &obj );
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed& operator= (const Fixed &fix);
	Fixed operator+(const Fixed &fix1);
	Fixed operator-(const Fixed &fix1);
	bool operator>(const Fixed &fix1);
	bool operator>=(const Fixed &fix1);
	bool operator<(const Fixed &fix1);
	bool operator<=(const Fixed &fix1);
	Fixed operator/(const Fixed &fix1);
	Fixed operator*(const Fixed &fix1);
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);
	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);


private:
	int _num;
	static const int _dig = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed &s);
