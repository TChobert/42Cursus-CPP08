#pragma once

class Span {

	private:

	public:

	Span(unsigned int N);
	~Span(void);

	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);
};
