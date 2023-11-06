#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);


	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	std::cout << "\033[38;5;218m[test1]\033[0m" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\033[38;5;218m[test2]\033[0m" << std::endl;
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	std::cout << "\033[38;5;218m[test3]\033[0m" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.crend();
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}

	std::cout << "\033[38;5;218m[test4]\033[0m" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

//	std::stack<int> s(mstack);

	std::cout << "\033[38;5;218m[test5]\033[0m" << std::endl;
	std::list<int> lStack;
	lStack.push_back(5);
	lStack.push_back(17);
	lStack.pop_back();
	lStack.push_back(3);
	lStack.push_back(5);
	lStack.push_back(737);
	lStack.push_back(0);

	std::list<int>::iterator lit = lStack.begin();
	std::list<int>::iterator lite = lStack.end();
	lit++;
	lit--;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	return 0;
}