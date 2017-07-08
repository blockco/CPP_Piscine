#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(const FragTrap &cpy)
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

FragTrap::FragTrap()
{
	this->name = "Default";
	this->h_p = 100;
	this->max_h_p = 100;
	this->e_p = 100;
	this->max_e_p = 100;
	this->lvl = 1;
	this->melee_dam = 30;
	this->ranged_dam = 20;
	this->armor_red = 5;
	std::cout << name << " ";
	std::cout << "FRAGTRAP! Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP! Deconstructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->h_p = 100;
	this->max_h_p = 100;
	this->e_p = 100;
	this->max_e_p = 100;
	this->lvl = 1;
	this->melee_dam = 30;
	this->ranged_dam = 20;
	this->armor_red = 5;
	std::cout << name << " ";
	std::cout << "FRAGTRAP! Constructor called" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5];
	std::string def = " not enough energy";

	attacks[0] = "Attacking with a crazy arm thing";
	attacks[1] = "Ran out of ranged attacks! throws a shoe";
	attacks[2] = "Slowly approaches with a kiss";
	attacks[3] = "Helps with your taxes and does a bad job";
	attacks[4] = "Shoots laser from his eyes";

	if (this->e_p >= 25)
	{
		std::cout << target << " attacks " << this->name << " " << attacks[rand() % 5] << std::endl;
		this->e_p = this->e_p - 25;
	}
	else
		std::cout << this->name << def << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
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
