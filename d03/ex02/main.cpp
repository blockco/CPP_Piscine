#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));
	FragTrap a("rob");
	ScavTrap b("Ben");
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

	b.meleeAttack("hella");
	b.challengeNewcomer();
	b.rangedAttack("paul");
	b.beRepaired(20);
	b.takeDamage(99);
	b.beRepaired(20);
	b.takeDamage(1000);
	b.challengeNewcomer();
	b.challengeNewcomer();

	return 0;
}
