#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <string>

template <typename T>
typename T::iterator	easyfind(T Ttype, const int& n) {
	for (typename T::iterator it = Ttype.begin(); it != Ttype.end(); ++it)
		if (*it == n)
		{
			std::cout << *it << std::endl;
			return it;
		}
		std::cout << "no match" << std::endl;
		return Ttype.end();
}

template <typename T>
typename T::iterator	easyfindWithStdFind(T &t, int n)
{
	return std::find(t.begin(), t.end(), n);
}

#endif