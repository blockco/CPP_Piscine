#include <string>
#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
	std::stringstream ss;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEED BACK NOISE *";
		return 0;
	}
	if (argc > 1)
	{
		int i = 1;
		while (i < argc)
		{
			ss << argv[i];
			i++;
		}
	}
	std::string s = ss.str();
	int a = 0;
	while (s[a])
	{
		s[a] = toupper(s[a]);
		a++;
	}
	std::cout << s;
	return 0;
}
