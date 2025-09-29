#include "Span.hpp"

int main() {
    try {
        // Test de base avec 5 nombres
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span = " << sp.longestSpan() << std::endl;

        // Test erreur : ajouter un 6e nombre
        std::cout << "Ajout d'un nombre supplémentaire..." << std::endl;
        sp.addNumber(42); // doit lever une exception
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        // Test avec seulement 1 nombre
        Span sp2(3);
        sp2.addNumber(5);
        std::cout << "Shortest span (sp2) = " << sp2.shortestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        // Test avec un grand nombre d'éléments
        Span sp3(10000);
        std::vector<int> bigRange;
        for (int i = 0; i < 10000; ++i)
            bigRange.push_back(i * 2); // nombres pairs

        sp3.addRange(bigRange.begin(), bigRange.end());

        std::cout << "Shortest span (sp3) = " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest span (sp3) = " << sp3.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
