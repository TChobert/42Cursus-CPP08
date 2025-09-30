#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

	public:

	MutantStack(void);
//	MutantStack(const MutantStack& other);
	~MutantStack(void);
//	MutantStack& operator=(const MutantStack& other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::iterator const_iterator;
	typedef typename std::stack<T>::container_type::iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::iterator const_reverse_iterator;

	iterator begin(void);
	iterator end(void);
	const_iterator cbegin(void);
	const_iterator cend(void);
	reverse_iterator rbegin(void);
	reverse_iterator rend(void);
	const_reverse_iterator crbegin(void);
	const_reverse_iterator crend(void);
};

#include "MutantStack.tpp"
