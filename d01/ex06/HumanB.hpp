#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &wep);

private:
	std::string name;
	Weapon *wep;
};
 #endif
