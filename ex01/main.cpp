#include "Span.hpp"
#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	Span mySpan(std::numeric_limits<unsigned int>::max());

	std::vector<int> vect;
	for (int i = -8000; i < 8000; ++i)
		vect.push_back(i);

	mySpan.addNumberIt<std::vector<int> >(vect.begin(), vect.end());
	std::cout << mySpan.shortestSpan() << std::endl;
	std::cout << mySpan.longestSpan() << std::endl;
	std::cout << std::endl;

	Span mySpan2(std::numeric_limits<unsigned int>::max());
	srand(time(NULL));
	std::vector<int> vect2;
	for (int i = 0; i < 10; ++i)
		vect2.push_back(rand());
	mySpan2.addNumberIt<std::vector<int> >(vect2.begin(), vect2.end());
	std::cout << mySpan2.shortestSpan() << std::endl;
	std::cout << mySpan2.longestSpan() << std::endl;
	return 0;
}
