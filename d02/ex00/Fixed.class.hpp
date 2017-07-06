class Fixed{
public:
	Fixed();
	Fixed( const Fixed &obj );
	~Fixed();
	Fixed& operator= (const Fixed &fix);
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _num;
	static const int _dig = 8;
};
