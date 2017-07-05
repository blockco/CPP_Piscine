#include <iostream>

int main() {
	std::string temp = "HI THIS IS BRAIN";
	std::string *point = &temp;
	std::string &ref = temp;

	std::cout << *point << std::endl;
	std::cout << ref << std::endl;
	return 0;
}
