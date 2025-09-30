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
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void);
	iterator end(void);
	const_iterator cbegin(void) const;
	const_iterator cend(void) const;
	reverse_iterator rbegin(void);
	reverse_iterator rend(void);
	const_reverse_iterator crbegin(void) const;
	const_reverse_iterator crend(void) const;
};

#include "MutantStack.tpp"
