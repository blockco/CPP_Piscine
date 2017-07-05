#include "Brain.hpp"
#include <iostream>
#include <string>

class Human{
public:
	Human();
	~Human();
	std::string identify();
	const Brain &getBrain() const;

private:
	Brain const _brain;
};
