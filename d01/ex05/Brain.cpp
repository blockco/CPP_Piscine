#include "Brain.hpp"
#include <iostream>
#include <sstream>
Brain::Brain()
{

}

Brain::~Brain()
{

}

std::string Brain::identify()
{
	std::stringstream spot;
	spot << this;
	return spot.str();
}
