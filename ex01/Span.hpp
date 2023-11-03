#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <exception>

class Span
{
public:
	class spanFullException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class notFoundSpanException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	Span(unsigned int N);
	Span(const Span& other);
	~Span();

	void	addNumber(unsigned int N);
//	void	shortestSpan();
	size_t	longestSpan();

	template<typename iterator_T>
	void	addRange(iterator_T begin, iterator_T end)
	{
		for(; begin != end; begin++)
			addNumber(*begin);
	}

private:
	Span();
	Span& operator=(const Span& other);

	unsigned int		maxSize;
	std::vector<int>(numbers);
};

std::ostream& operator<<(std::ostream& os, const Span& span);

#endif