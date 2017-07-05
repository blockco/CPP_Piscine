#include "ZombieEvent.hpp"
#include <iostream>
#include <string>

ZombieEvent::ZombieEvent()
{
	std::cout << "Its happening" << std::endl;
}
void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *ret = new Zombie(name, this->type);
	return ret;
}

void ZombieEvent::randomChump()
{
	std::string names[6] = {"rob", "bill", "jake", "tom", "frank", "peter"};
	Zombie temp = Zombie(names[rand() % 6], this->type);
	temp.announce();
}
