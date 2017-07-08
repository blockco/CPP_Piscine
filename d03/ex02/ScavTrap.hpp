#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &cpy);
	void challengeNewcomer();
	ScavTrap& operator=(const ScavTrap &rhs);
};
