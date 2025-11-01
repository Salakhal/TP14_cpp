#include "Compte.hpp"

int main() {
    Compte c1("Alice", 1000.0);

    c1.afficherSolde();

    
    try {
        c1.deposer(500);
    } catch (const MontantInvalideException& e) {
        cout << e.what() << endl;
    }

    try {
        c1.deposer(-100);
    } catch (const MontantInvalideException& e) {
        cout << e.what() << endl;
    }

    try {
        c1.retirer(300);
    } catch (const exception& e) { 
        cout << e.what() << endl;
    }

   
    try {
        c1.retirer(-50);
    } catch (const MontantInvalideException& e) {
        cout << e.what() << endl;
    }

   
    try {
        c1.retirer(2000);
    } catch (const SoldeInsuffisantException& e) {
        cout << e.what() << endl;
    }

    return 0;
}
