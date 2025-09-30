#include "MutantStack.hpp"

int main(void) {

	MutantStack<int> mstack;

	std::cout << "Pushing 5 into MStack" << std::endl;
	mstack.push(5);
	std::cout << "Pushing 17 into MStack" << std::endl;
	mstack.push(17);

	std::cout << "MStack TOP: " << mstack.top() << std::endl;

	std::cout << "Poping last pushed element of MStack" << std::endl;
	mstack.pop();
	std::cout << "MStack SIZE:" << mstack.size() << std::endl;
	std::cout << "MStack TOP: " << mstack.top() << std::endl;

	std::cout << std::endl;
	std::cout << "Pushing 3 into MStack" << std::endl;
	mstack.push(3);
	std::cout << "Pushing 5 into MStack" << std::endl;
	mstack.push(5);
	std::cout << "Pushing 737 into MStack" << std::endl;
	mstack.push(737);
	//[...]
	std::cout << "Pushing 0 into MStack" << std::endl;
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << std::endl;
	std::cout << "Printing MStack content with iterator:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
