#include <iostream>

template <typename T>
void itter(T *mem, int size, void (*OP)(const T&))
{
	int i = 0;
	while (i < size)
	{
		OP(mem[i]);
		i++;
	}
}

void fun(const std::string &mine)
{
	std::cout << mine << std::endl;
}

int main() {
	// std::string fuck("this");
	std::string what[6] = {"Hello", "bye", "fam", "friends", "intro", "life"};
	itter(what, 6, fun);
	return 0;
}
