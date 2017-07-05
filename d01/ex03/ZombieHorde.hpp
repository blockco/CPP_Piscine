#include "Zombie.hpp"

class Zombiehorde{
public:
	int size;
	void annouce();
	Zombiehorde(int n);
	Zombiehorde();
	~Zombiehorde();

private:
	Zombie *_horde;
};
