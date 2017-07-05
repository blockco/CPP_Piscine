#include <iostream>
#include "ZombieHorde.hpp"

Zombiehorde::Zombiehorde(int n)
{
	int i = 0;
	this->size = n;
	this->_horde = new Zombie[n];

	std::cout << "horde has been created" << std::endl;
	while (i < n)
	{
		this->_horde[i].randname();
		i++;
	}
}
Zombiehorde::Zombiehorde()
{
	int i;
	int n;

	this->size = n;
	std::cout << "horde has been created" << std::endl;
	n = 0;
	i = 0;
	this->_horde = new Zombie[n];
	while (i < n)
	{
		this->_horde[i].randname();
		i++;
	}
}
Zombiehorde::~Zombiehorde()
{
	std::cout << "horde has died" << std::endl;
	delete[] this->_horde;
}

void Zombiehorde::annouce()
{
	int i;

	i = 0;
	while (i < this->size)
	{
		this->_horde[i].announce();
		i++;
	}
}
