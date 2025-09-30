#include "Span.hpp"

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

Span::Span(const Span& other) {

	_maxSize = other._maxSize;
	for (std::vector<int>::const_iterator it = other._contain.begin(); it != other._contain.end(); ++it) {
		_contain.push_back(*it);
	}
}

Span::~Span(void) {}

Span& Span::operator=(const Span& other) {

	if (this != &other) {

		this->_maxSize = other._maxSize;
		for (std::vector<int>::const_iterator it = other._contain.begin(); it != other._contain.end(); ++it) {
			this->_contain.push_back(*it);
		}
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
		return _contain[0];

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
