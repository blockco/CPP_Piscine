#include "HumanA.hpp"
#include <iostream>
#include <string>
HumanA::HumanA(std::string _name, Weapon &_wep) :
name(_name), wep(_wep)
{
}

void HumanA::attack()
{
	std::cout << this->name << "  attacks with his " << this->wep.getType() << std::endl;
}
