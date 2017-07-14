#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "No Value" << std::endl;
		return 0;
	}
	std::string save(argv[1]);

	std::string::size_type sz;
	float mars = std::stof (save,&sz);
	std::cout << "Float: " << mars << std::endl;
	// std::cout << "Char: " << static_cast<char>(argv[1]) << std::endl;
	// std::cout << "Int: " << static_cast<int>(argv[1]) << std::endl;
	// std::cout << "Float: " << std::setprecision(10) << static_cast<float>(argv[1]) << std::endl;
	// std::cout << "Float: " << std::setprecision(10) << static_cast<double>(argv[1]) << std::endl;

	// if ()
	return 0;
}
