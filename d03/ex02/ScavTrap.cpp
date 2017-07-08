#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	this->h_p = cpy.h_p;
	this->max_h_p = cpy.max_h_p;
	this->e_p = cpy.e_p;
	this->max_e_p = cpy.max_e_p;
	this->lvl = cpy.lvl;
	this->melee_dam = cpy.melee_dam;
	this->ranged_dam = cpy.ranged_dam;
	this->armor_red = cpy.armor_red;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->h_p = 100;
	this->max_h_p = 100;
	this->e_p = 50;
	this->max_e_p = 50;
	this->lvl = 1;
	this->melee_dam = 20;
	this->ranged_dam = 15;
	this->armor_red = 3;
	std::cout << name << " ";
	std::cout << "SCAVTRAP! Constructor called" << std::endl;
}

ScavTrap::ScavTrap()
{
	this->name = "DEFAULT";
	this->h_p = 100;
	this->max_h_p = 100;
	this->e_p = 50;
	this->max_e_p = 50;
	this->lvl = 1;
	this->melee_dam = 20;
	this->ranged_dam = 15;
	this->armor_red = 3;
	std::cout << name << " ";
	std::cout << "SCAVTRAP! Constructor called" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::string chal[5];

	chal[0] = "I challange you to catch my shoe!";
	chal[1] = "I challange you to run a mile a day!";
	chal[2] = "I need you to fetch me an apple";
	chal[3] = "I challange you to win a dual with me!";
	chal[4] = "I challange you to be a true HUMAN!!";

	std::cout << chal[rand() % 5] << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = rhs.name;
	this->h_p = rhs.h_p;
	this->max_h_p = rhs.max_h_p;
	this->e_p = rhs.e_p;
	this->max_e_p = rhs.max_e_p;
	this->lvl = rhs.lvl;
	this->melee_dam = rhs.melee_dam;
	this->ranged_dam = rhs.ranged_dam;
	this->armor_red = rhs.armor_red;
	return *this;
}
