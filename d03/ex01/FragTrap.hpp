#include <string>

class FragTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap& operator=(const FragTrap &fix);
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
