#include "Human.hpp"
#include <iostream>
#include <sstream>

Human::Human()
{

}

Human::~Human()
{

}

std::string Human::identify()
{
	std::stringstream spot;
	spot << &this->_brain;
	return spot.str();
}

Brain &Human::getBrain()
{
	return this->_brain;
}
