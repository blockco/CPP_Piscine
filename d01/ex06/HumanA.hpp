#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{
public:
	HumanA(std::string name, Weapon &wep);
	void attack();

private:
	std::string name;
	Weapon &wep;
};

#endif
