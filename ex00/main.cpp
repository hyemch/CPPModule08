#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::cout << "\033[1m\033[38;5;183m[TEST 1]\033[0m" << std::endl;

	std::vector<char> charArray;
	charArray.push_back('h');
	charArray.push_back('e');
	charArray.push_back('l');
	charArray.push_back('l');
	charArray.push_back('0');

	std::vector<char> valueArray;
	valueArray.push_back('l');
	valueArray.push_back('a');


	for (std::vector<char>::size_type i = 0; i < valueArray.size(); i++)
	{
		int result = easyfind(charArray, valueArray[i]);
		if (result != -1)
		{
			std::cout << "Value \033[1m\033[38;5;211m" << valueArray[i] << "\033[0m found." << std::endl;
		} else
		{
			std::cout << "Value \033[1m\033[38;5;211m" << valueArray[i] << "\033[0m not found." << std::endl;
		}
	}

	std::cout << "\033[1m\033[38;5;183m[TEST 2]\033[0m" << std::endl;

	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);

	int intValue = 30;
	int result = easyfind(lst, intValue);
	if (result != -1)
	{
		std::cout << "Value \033[1m\033[38;5;211m" << intValue << "\033[0m found." << std::endl;
	} else
	{
		std::cout << "Value \033[1m\033[38;5;211m" << intValue << "\033[0m not found." << std::endl;
	}

	return 0;
}