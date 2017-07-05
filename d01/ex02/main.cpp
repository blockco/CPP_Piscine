#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent ev_1;
	ev_1.setZombieType("dying");
	ev_1.randomChump();

	ZombieEvent ev_2;
	ev_2.setZombieType("Undead");
	Zombie *zom1 = ev_2.newZombie("Hellraiser");

	delete zom1;
	return 0;
}
