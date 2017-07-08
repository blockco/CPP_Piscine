#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	~FragTrap();
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap& operator=(const FragTrap &rhs);
};
