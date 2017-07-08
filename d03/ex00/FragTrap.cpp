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
	this->name = "DEFAULT";
	this->h_p = 100;
	this->max_h_p = 100;
	this->e_p = 100;
	this->max_e_p = 100;
	this->lvl = 1;
	this->melee_dam = 30;
	this->ranged_dam = 20;
	this->armor_red = 5;
	std::cout << name << " ";
	std::cout << "Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Deonstructor called" << std::endl;
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
	std::cout << "Constructor called" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " <<
	this->ranged_dam << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " with melee, causing " <<
	this->melee_dam << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->armor_red;
	if ((int)amount < 0)
		amount = 0;
	if ((int)amount > this->h_p)
		this->h_p = 0;
	else
		this->h_p = this->h_p - amount;
	std::cout << this->name << " took " << amount << " of damage" << std::endl;
	std::cout << this->name << " Health = " << this->h_p << std::endl;
}
void FragTrap::beRepaired(unsigned int amount)
{
	if ((amount + this->h_p) > 100)
		this->h_p = 100;
	else
		this->h_p = amount + this->h_p;
	std::cout << this->name << " healed " << amount << std::endl;
	std::cout << "Current Health " << this->h_p << std::endl;
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
