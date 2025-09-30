#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& other) {

	_maxSize = other._maxSize;
	_contain.clear();
	_contain = other._contain;
}

Span::~Span(void) {}

Span& Span::operator=(const Span& other) {

	if (this != &other) {
		this->_maxSize = other._maxSize;
		this->_contain.clear();
		this->_contain = other._contain;
	}
	return (*this);
}

void Span::addNumber(int number) {

	if (_contain.size() >= _maxSize) {
		throw std::runtime_error("Span is full");
	}
	_contain.push_back(number);
}

int Span::longestSpan(void) {

	if (_contain.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	int minVal = *std::min_element(_contain.begin(), _contain.end());
	int maxVal = *std::max_element(_contain.begin(), _contain.end());

	return (maxVal - minVal);
}

int Span::shortestSpan(void) {

	 if (_contain.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	std::vector<int> copy = _contain;
	std::sort(copy.begin(), copy.end());

	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < copy.size(); ++i) {
		int diff = copy[i] - copy[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	return (minSpan);
}
