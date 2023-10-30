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

	char charValueOne = 'l';
	char charValueTwo = 'a';

	try
	{
		std::vector<char>::iterator result = easyfind(charArray, charValueOne);
		std::cout << "Value \033[1m\033[38;5;211m" << *result << "\033[0m found." << std::endl;

		result = easyfind(charArray, charValueTwo);
		std::cout << "Value \033[1m\033[38;5;211m" << *result << "\033[0m found." << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[1m\033[38;5;183m[TEST 2]\033[0m" << std::endl;

	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);

	try
	{
		int intValue = 30;
		std::list<int>::iterator result = easyfind(lst, intValue);
		std::cout << "Value \033[1m\033[38;5;211m" << *result << "\033[0m found." << std::endl;
		result = easyfind(lst, 50);
		std::cout << "Value \033[1m\033[38;5;211m" << *result << "\033[0m found." << std::endl;
		result = easyfind(lst, -1);
		std::cout << "Value \033[make f1m\033[38;5;211m" << *result << "\033[0m found." << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}