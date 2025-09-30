#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <cstdlib>
#include "easyfind.hpp"

int main() {

    // ===== Test avec std::vector =====
    std::vector<int> vec;
    int value = 10;
    for (int i = 0; i < 5; ++i) {
        vec.push_back(value);
        value += 10;
    }

    std::cout << "=== Vector Test ===" << std::endl;
    try {
        std::vector<int>::iterator itVec = easyfind(vec, 30);
        std::cout << "Found value in vector: " << *itVec << std::endl;
		std::cout << "Modification of value with 300" << std::endl;
        *itVec = 300;
        std::cout << "After modification: " << vec[2] << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(vec, 99); // inexistant
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // ===== Test avec std::list =====
    std::list<int> lst;
    value = 10;
    for (int i = 0; i < 5; ++i) {
        lst.push_back(value);
        value += 10;
    }

    std::cout << "\n=== List Test ===" << std::endl;
    try {
        std::list<int>::iterator itLst = easyfind(lst, 20);
        std::cout << "Found value in list: " << *itLst << std::endl;
		std::cout << "Modification of value with 150" << std::endl;
        *itLst = 150;
        std::cout << "After modification: ";
        std::list<int>::iterator itLst2;
        for (itLst2 = lst.begin(); itLst2 != lst.end(); ++itLst2) {
			std::cout << *itLst2 << " ";
		}
        std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(lst, 100);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // ===== Test avec std::deque =====
    std::deque<int> deq;
    value = 1;
    for (int i = 0; i < 5; ++i) {
        deq.push_back(value);
        value += 1;
    }
    std::cout << "\n=== Deque Test ===" << std::endl;

    try {
        std::deque<int>::iterator itDeq = easyfind(deq, 4);
        std::cout << "Found value in deque: " << *itDeq << std::endl;
		std::cout << "Modification of value with 400" << std::endl;
        *itDeq = 400;
        std::cout << "After modification: ";
        std::deque<int>::iterator itDeq2;
        for (itDeq2 = deq.begin(); itDeq2 != deq.end(); ++itDeq2) {
            std::cout << *itDeq2 << " ";
		}
        std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        easyfind(deq, 99);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	return (EXIT_SUCCESS);
}
