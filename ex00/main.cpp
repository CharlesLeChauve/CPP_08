#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <deque>
#include <vector>

int	main(void)
{
	int values[] = {39, 45, 26, 13, 41, 21, 79, 80, 29, 5, 57, 11, 71, 91, 43, 2, 38, 60, 92, 37, 82, 78, 23, 56, 62,\
	97, 49, 60, 22, 69, 43, 37, 97, 14, 63, 39, 40, 91, 26, 75, 88, 53, 96, 16, 63, 15, 31, 10, 62, 79};
	std::vector<int> vect;
	std::list<int> list;
	std::deque<int> deque;
	for (size_t i = 0; i < 50; ++i)
	{
		vect.push_back(values[i]);
		list.push_back(values[i]);
		deque.push_back(values[i]);
	}
	try {
		std::vector<int>::iterator it = easyfind<std::vector<int> >(vect, 97);
		std::cout << *it << " found in container vector" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::list<int>::iterator it = easyfind<std::list<int> >(list, 97);
		std::cout << *it << " found in container list" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::deque<int>::iterator it = easyfind<std::deque<int> >(deque, 97);
		std::cout << *it << " found in container deque" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::vector<int>::iterator it = easyfind<std::vector<int> >(vect, 51);
		std::cout << *it << " found in container vector" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::list<int>::iterator it = easyfind<std::list<int> >(list, 51);
		std::cout << *it << " found in container list" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::deque<int>::iterator it = easyfind<std::deque<int> >(deque, 51);
		std::cout << *it << " found in container deque" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}