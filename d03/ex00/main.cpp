#include "FragTrap.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));
	FragTrap a("rob");
	a.meleeAttack("Jake");
	a.vaulthunter_dot_exe("peter");
	a.rangedAttack("paul");
	a.beRepaired(20);
	a.takeDamage(99);
	a.beRepaired(20);
	a.takeDamage(1000);
	a.vaulthunter_dot_exe("peter");
	a.vaulthunter_dot_exe("peter");
	a.vaulthunter_dot_exe("peter");
	a.vaulthunter_dot_exe("peter");
	return 0;
}
