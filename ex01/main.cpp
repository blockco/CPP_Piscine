#include <iostream>
#include <string>
#include "book.class.hpp"

int main() {
	Book phone;
	std::string action;

	while (1)
	{
		std::cout << "Pick action: ";
		std::getline (std::cin, action);
		if (action.compare("EXIT") == 0)
			break;
		if (action.compare("ADD") == 0)
			phone.addit();
		if (action.compare("SEARCH") == 0)
			phone.searchit();
	}
	return 0;
}
