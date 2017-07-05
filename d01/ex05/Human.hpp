#include "Brain.hpp"
#include <iostream>
#include <string>

class Human{
public:
	Human();
	~Human();
	std::string identify();
	Brain &getBrain();

private:
	Brain _brain;
};
