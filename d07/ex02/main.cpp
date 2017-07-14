#include "Array.hpp"
#include <iostream>

// int main()
// {
// 	Array<std::string> first(2);
// 	first[0] = "hello";
// 	first[1] = "bye";
//
//
// 	Array<int> second(2);
// 	second[0] = 10;
// 	second[1] = 20;
// 	int i = 0;
// 	while(i < first.getlen())
// 	{
// 		std::cout << first[i] << std::endl;
// 		i++;
// 	}
// 	i = 0;
// 	while(i < second.getlen())
// 	{
// 		std::cout << second[i] << std::endl;
// 		i++;
// 	}
// 	return 0;
// }

#include "Array.hpp"
#include <iostream>
#include <string>
#include <limits>

int     main(void)
{
    std::srand(std::time(NULL));
    unsigned int    size = 10;
    int             tempi = 0;
    char            tempc = 0;
    float           tempf = 0.0f;

    try
    {
        Array<int> whatevers(0);
        Array<int> integers(size);
        for (unsigned int i = 0; i < size; i++)
        {
            tempi = rand() % INT_MAX;
            integers[i] = tempi;
            std::cout << "integers[" << i << "] = " << tempi << std::endl;
        }

        Array<char> chars(size);
        for (unsigned int i = 0; i < size; i++)
        {
            tempc = rand() % CHAR_MAX;
            chars[i] = tempc;
            std::cout << "chars[" << i << "] = " << tempc << std::endl;
        }

        Array<float> floats(size);
        for (unsigned int i = 0; i < size; i++)
        {
            tempf = static_cast<float>(rand() % INT_MAX);
            floats[i] = tempf;
            std::cout << "floats[" << i << "] = " << tempf << std::endl;
        }

        // check assignment operator and square bracket overload
        Array<int> ints2 = integers;
        for (unsigned int i = 0; i < size; i++)
        {
            tempi = ints2[i];
            std::cout << "ints2[" << i << "] = " << tempi << std::endl;
        }
        Array<char> chars2 = chars;
        for (unsigned int i = 0; i < size; i++)
        {
            tempc = chars2[i];
            std::cout << "chars2[" << i << "] = " << tempc << std::endl;
        }
        Array<float> floats2 = floats;
        for (unsigned int i = 0; i < size; i++)
        {
            tempf = floats2[i];
            std::cout << "floats2[" << i << "] = " << tempf << std::endl;
        }
        floats2[size];
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
