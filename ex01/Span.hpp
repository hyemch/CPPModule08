#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <stdexcept>
#include <iostream>

class Span
{
public:
	class addNumException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class notFoundException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	Span(unsigned int N);
	~Span();

	void	addNumber(unsigned int N);
	void	shortestSpan();
	void	longestSpan();

private:
	Span();
	Span(const Span& other);
	Span& operator=(const Span& other);
	unsigned int N;
};


#endif