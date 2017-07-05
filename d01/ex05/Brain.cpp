#include "Brain.hpp"
#include <iostream>
#include <sstream>
Brain::Brain()
{

}

Brain::~Brain()
{

}

const std::string Brain::identify() const
{
	std::stringstream spot;
	spot << this;
	return spot.str();
}
