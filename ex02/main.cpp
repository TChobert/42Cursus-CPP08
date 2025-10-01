#include "MutantStack.hpp"
#include <list>
#include <algorithm>
#include <iostream>

int main() {
    MutantStack<int> mstack;

    // ===== Test push/pop/top/size =====
    std::cout << "--- Basic stack operations ---" << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // ===== Test forward iterator =====
    std::cout << "\n--- Forward iteration ---" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // ===== Test const iterator =====
    std::cout << "\n--- Const iteration ---" << std::endl;
    const MutantStack<int>& cmstack = mstack;
    for (MutantStack<int>::const_iterator it = cmstack.cbegin(); it != cmstack.cend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // ===== Test reverse iterator =====
    std::cout << "\n--- Reverse iteration ---" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
        std::cout << *rit << " ";
    std::cout << std::endl;

    // ===== Test const reverse iterator =====
    std::cout << "\n--- Const reverse iteration ---" << std::endl;
    for (MutantStack<int>::const_reverse_iterator crit = cmstack.crbegin(); crit != cmstack.crend(); ++crit)
        std::cout << *crit << " ";
    std::cout << std::endl;

    // ===== Test comparison with std::list =====
    std::cout << "\n--- Comparison with std::list ---" << std::endl;
    std::list<int> lst(mstack.begin(), mstack.end());
    std::cout << "List contents: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // ===== Test modification via iterator =====
    std::cout << "\n--- Modification via iterator ---" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        *it += 1;

    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;


	std::cout << "\n--- Testing copy constructor and assignment ---\n";

	// Original stack
	MutantStack<int> original;
	original.push(10);
	original.push(20);
	original.push(30);

	// Copy constructor
	MutantStack<int> copyStack(original);
	std::cout << "Contents of copyStack (constructed from original): ";
	for (MutantStack<int>::iterator it = copyStack.begin(); it != copyStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	// Modify original to ensure copy is independent
	original.pop();
	original.push(99);

	// Assignment operator
	MutantStack<int> assignedStack;
	assignedStack = original;
	std::cout << "Contents of assignedStack (after assignment from original): ";
	for (MutantStack<int>::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it)
    	std::cout << *it << " ";
	std::cout << std::endl;

	// Verify original stack
	std::cout << "Contents of original after modification: ";
	for (MutantStack<int>::iterator it = original.begin(); it != original.end(); ++it)
    	std::cout << *it << " ";
	std::cout << std::endl;

    return 0;
}
