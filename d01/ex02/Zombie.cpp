#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Default";
	this->type = "type_default";
	std::cout << this->name << " Zombie has been created" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << this->name << " Zombie has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " Zombie is dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << " " << this->type << " Braiiiiiiinnnssss.." << std::endl;
}
