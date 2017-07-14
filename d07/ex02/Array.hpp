#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>


template <typename T>
class Array
{
public:
	T &operator[](unsigned int i)
	{
		if (i < 0 || i >= this->_len)
			throw std::exception();
		return(this->_arr[i]);
	}
	Array<T>&operator=(Array<T> const &rhs)
	{
		int i = 0;
		if (this == &rhs)
			return *this;
		if (this->_arr)
			delete[] this->_arr;
		this->_len = rhs.getlen();
		this->_arr = new T[this->_len];
		while (i < this->_len)
		{
			this->_arr[i] = rhs._arr[i];
			i++;
		}
		return *this;
	}
	Array<T>(void)
	{
		this->_len = 0;
		this->_arr = NULL;
	}
	Array <T>(unsigned int num)
	{
		this->_arr = new T[num];
		this->_len = num;
	}
	Array<T>(Array<T> const &cpy)
	{
		*this = cpy;
	}
	~Array<T>(void)
	{
		if (this->_arr)
		delete[] this->_arr;
	}
	unsigned int getlen(void) const
	{
		return this->_len;
	}
private:
	unsigned int _len;
	T *_arr;
};

#endif
