#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

//template <typename T>
//size_t	easyfind(T container, int value)
//{
//	for (size_t i = 0; i < container.size(); i++)
//	{
//		if (container[i] == value)
//			return i;
//	}
//	return -1;
//}

template <typename T>
int	easyfind(T container, int value)
{
	typename T::const_iterator it = container.begin();

	for (;it != container.end(); it++)
	{
		if (*it == value)
			return 0;
	}
	return -1;
}

#endif