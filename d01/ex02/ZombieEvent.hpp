#include "Zombie.hpp"
#include <iostream>
#include <string>

class ZombieEvent{
public:
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	void randomChump();
	ZombieEvent();

private:
	std::string type;
};
