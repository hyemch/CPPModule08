#include "Span.hpp"

Span::Span(unsigned int N)
:N(N)
{
}

Span::~Span()
{
}

const char* Span::addNumException::what() const throw()
{
	return ("there are already all elements stored.");
}

const char* Span::notFoundException::what() const throw()
{
	return ("Span not found.");
}