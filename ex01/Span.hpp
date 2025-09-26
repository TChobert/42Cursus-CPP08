#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span {

	private:

	unsigned int _maxSize;
	std::vector<int> _contain;

	public:

	Span(unsigned int N);
	~Span(void);

	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);
};
