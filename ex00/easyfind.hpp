
#include <iostream>
template <typename T>
int	easyfind(T container, int toFind)
{
	typename T::iterator it = container.begin();
	while (it != container.end())
	{
		if (*it == toFind)
			return (*it);
		it++;
	}
	throw (std::logic_error("Element not in the container"));
}