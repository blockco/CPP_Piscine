#include <string>

class ScavTrap
{
public:
	~ScavTrap();
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
	ScavTrap& operator=(const ScavTrap &fix);
private:
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
