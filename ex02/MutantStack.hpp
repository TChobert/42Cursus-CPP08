#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

	public:

	MutantStack(void);
	MutantStack(const MutantStack& other);
	~MutantStack(void);
	MutantStack& operator=(const MutantStack& other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::iterator const_iterator;

	iterator begin(void);
	iterator end(void);
};

#include "MutantStack.tpp"
