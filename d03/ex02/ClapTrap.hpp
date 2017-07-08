#include <string>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &cpy);
	ClapTrap();
	~ClapTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap& operator=(const ClapTrap &fix);
protected:
	std::string name;
	int h_p;
	int max_h_p;
	int e_p;
	int max_e_p;
	int lvl;
	int melee_dam;
	int ranged_dam;
	int armor_red;
};

#endif
