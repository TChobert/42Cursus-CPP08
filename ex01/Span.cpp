#include "Span.hpp"

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {}

Span::~Span(void) {}

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

	int span;
	std::vector<int> copy = _contain;

	std::sort(copy.begin(), copy.end());

	span = copy[1] - copy[0];
	for (size_t i = 1; i < copy.size(); ++i) {
		if ()
	}
}
