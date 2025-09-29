#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
	return (this->c.end());
}
