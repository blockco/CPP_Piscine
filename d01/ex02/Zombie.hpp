#include <string>
#include <iostream>

class Zombie{
public:
	std::string name;
	std::string type;
	void announce();
	Zombie();
	Zombie(std::string name, std::string);
	~Zombie();
};
