#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
private:
	unsigned int _maxSize;
	std::vector<int> _numbers;
public:
	Span(unsigned int N);
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& other);

	int	maxNum();
	int minNum();

	unsigned int shortestSpan();
	unsigned int longestSpan();

	void addNumber(int num);
	template <typename T>
	void addNumberIt(typename T::iterator begin, typename T::iterator end)
	{
		for (typename T::iterator it = begin; begin != end; ++it)
		{
			addNumber(*begin);
			++begin;
		}
	}
};
