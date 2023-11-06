#include "Span.hpp"
#include <list>

int main(void)
{
	try
	{
		Span sp = Span(5);

//		sp.addNumber(6);
	//	sp.addNumber(3);
	//	sp.addNumber(17);
	//	sp.addNumber(9);
	//	sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}

	try
	{
		Span sp2 = Span(20000);

		for (int i = 0; i < 20000; i++)
		{
			sp2.addNumber(rand() % 30000);
		}
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}

	try
	{
		Span sp3 = Span(20000);

		std::list<int> listNum;
		for (int i = 0; i < 15000; ++i)
		{
			listNum.push_back(rand() % 30000);
		}
		sp3.addRange(listNum.begin(), listNum.end());
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;


	}
	catch (std::exception& e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}

	return 0;
}