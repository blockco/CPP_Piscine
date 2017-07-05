#include <string>
#include <iostream>

class Zombie{
public:
	void announce();
	void randname();
	Zombie();
	Zombie(std::string name, std::string);
	~Zombie();
private:
	std::string name;
	std::string type;
};
