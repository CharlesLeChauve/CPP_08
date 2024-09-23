#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::~Span() {}

Span::Span(const Span& other) {
	this->_maxSize = other._maxSize;
	this->_numbers = other._numbers;
}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		this->_maxSize = other._maxSize;
		this->_numbers = other._numbers;
	}
	return *this;
}

void Span::addNumber(int num) {
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full, can't add number");
	else
		_numbers.push_back(num);
}

int	Span::maxNum()
{
	std::vector<int>::iterator it = _numbers.begin();
	int	max = std::numeric_limits<int>::min();

	if (_numbers.size() == 0)
		throw std::runtime_error("Span is Empty");
	while (it != _numbers.end())
	{
		if (*it > max)
			max = *it;
		++it;
	}
	return (max);
}

int	Span::minNum()
{
	std::vector<int>::iterator it = _numbers.begin();
	int	min = std::numeric_limits<int>::max();

	if (_numbers.size() == 0)
		throw std::runtime_error("Span is Empty");
	while (it != _numbers.end())
	{
		if (*it < min)
			min = *it;
		++it;
	}
	return (min);
}

unsigned int Span::shortestSpan()
{
	if (_numbers.size() <= 1)
		throw std::runtime_error("Span must contain at least two numbers");

	std::vector<int> _numCpy(_numbers);
	std::sort(_numCpy.begin(), _numCpy.end());
	
	unsigned int span = std::numeric_limits<unsigned int>::max();

	for(std::vector<int>::iterator it = _numCpy.begin(); it != _numCpy.end() - 1; ++it)
		span = std::min(static_cast<unsigned int>(std::abs(static_cast<long>(*(it + 1) - *it))), span);
	return span;
}

unsigned int Span::longestSpan()
{
	return static_cast<unsigned int>(std::abs(maxNum() - minNum()));
}