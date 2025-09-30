#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <limits>

class Span {

	private:

	unsigned int _maxSize;
	std::vector<int> _contain;

	public:

	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span(void);

	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);

	template<typename InputIt>
	void addRange(InputIt first, InputIt last) {

		if (std::distance(first, last) + _contain.size() > _maxSize)
			throw std::runtime_error("Adding this range would exceed max size");
		_contain.insert(_contain.end(), first, last);
	}
};
