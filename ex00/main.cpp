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
        int& val = easyfind(vec, 30);
        std::cout << "Found value in vector: " << val << std::endl;
        val = 300;
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
        int& val = easyfind(lst, 20);
        std::cout << "Found value in list: " << val << std::endl;
        val = 150;

        std::cout << "After modification: ";
        std::list<int>::iterator it;
        for (it = lst.begin(); it != lst.end(); ++it)
            std::cout << *it << " ";
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
        int& val = easyfind(deq, 4);
        std::cout << "Found value in deque: " << val << std::endl;
        val = 400;

        std::cout << "After modification: ";
        std::deque<int>::iterator it;
        for (it = deq.begin(); it != deq.end(); ++it)
            std::cout << *it << " ";
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
