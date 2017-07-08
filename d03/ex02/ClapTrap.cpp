#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
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
	std::cout << "DEFAULT CLAPTRAP! Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAPTRAP! Deconstructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
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

ClapTrap::ClapTrap(std::string name)
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
	std::cout << "CLAPTRAP! Constructor called" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " <<
	this->ranged_dam << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " with melee, causing " <<
	this->melee_dam << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
void ClapTrap::beRepaired(unsigned int amount)
{
	if ((amount + this->h_p) > 100)
		this->h_p = 100;
	else
		this->h_p = amount + this->h_p;
	std::cout << this->name << " healed " << amount << std::endl;
	std::cout << "Current Health " << this->h_p << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
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
