#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &wep)
{
		this->wep = &wep;
}

void HumanB::attack()
{
	std::cout << this->name << "  attacks with his " << this->wep->getType() << std::endl;
}
