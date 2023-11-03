#include "Span.hpp"

Span::Span(unsigned int N)
:maxSize(N)
{
}

Span::Span(const Span &other)
:maxSize(other.maxSize)
{
}

Span::~Span()
{
}

void	Span::addNumber(unsigned int N)
{
	if (numbers.size() >= maxSize)
	{
		throw spanFullException();
	}
	numbers.push_back(N);
}

size_t	Span::longestSpan()
{
	if (numbers.size() < 2)
		throw notFoundSpanException();
	else
		return (*std::max_element(numbers.begin(), numbers.end()) \
		- *std::min_element(numbers.begin(),numbers.end()));
}

//void	Span::shortestSpan()
//{
//	if (numbers.size() < 2)
//		throw notFoundSpanException();
//	else
//		std::sort(numbers.begin(), numbers.end());
//
//}

const char* Span::spanFullException::what() const throw()
{
	return ("there are already all elements stored.");
}

const char* Span::notFoundSpanException::what() const throw()
{
	return ("Span not found.");
}