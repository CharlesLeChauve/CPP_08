#include <algorithm>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T& container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw (std::logic_error("Element not in the container"));
	else
		return (it);
}