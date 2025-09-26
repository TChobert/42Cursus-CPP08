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

        std::cout << "Longest span = " << sp.longestSpan() << std::endl;
        // Quand tu auras implémenté shortestSpan, tu pourras aussi tester :
        // std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;

        // Test erreur : ajouter un 6e nombre
        std::cout << "Ajout d'un nombre supplémentaire..." << std::endl;
        sp.addNumber(42); // doit lever une exception
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        // Test avec seulement 1 nombre (devrait poser problème si tu appelles longestSpan)
        Span sp2(3);
        sp2.addNumber(5);
        std::cout << "Longest span (sp2) = " << sp2.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
