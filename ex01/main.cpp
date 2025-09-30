#include "Span.hpp"

// int main() {
// 	try {

// 		std::cout << BRIGHT_BLUE << "Creation of a Span with 5 of capacity" << RESET << std::endl;
// 		Span sp(5);

// 		std::cout << BRIGHT_BLUE << "Fill the Span with numbers: 6 - 3 - 17 - 9 - 11" << RESET << std::endl;
// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);

// 		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
// 		std::cout << "Longest span = " << sp.longestSpan() << std::endl;

// 		std::cout << BRIGHT_BLUE << "Trying to add a sixth number..." << RESET << std::endl;
// 		sp.addNumber(42);
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}

// 	try {

// 		std::cout << BRIGHT_BLUE << "Creation of a Span with 3 of capacity" << RESET << std::endl;
// 		Span sp2(3);

// 		std::cout << BRIGHT_BLUE << "Fill the Span with number 3" << RESET << std::endl;
// 		sp2.addNumber(5);
// 		std::cout << "Shortest span (sp2) = " << sp2.shortestSpan() << std::endl;
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}

// 	try {
// 		std::cout << BRIGHT_BLUE << "Creation of a Span with 11054 of capacity" << RESET << std::endl;
// 		Span sp3(11054);

// 		std::vector<int> bigRange;
// 		for (int i = 0; i < 11054; ++i)
// 			bigRange.push_back(i * 2);

// 		sp3.addRange(bigRange.begin(), bigRange.end());

// 		std::cout << "Shortest span (sp3) = " << sp3.shortestSpan() << std::endl;
// 		std::cout << "Longest span (sp3) = " << sp3.longestSpan() << std::endl;
// 	}
// 	catch (std::exception &e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}
	
// 	return (EXIT_SUCCESS);
// }


// ======> 42's main below:

int main() {

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
