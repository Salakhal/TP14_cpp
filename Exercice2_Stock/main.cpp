#include "Produit.hpp"

int main() {
    Produit p1("Cahier", 10);

    p1.afficherStock();

    try {
        p1.vendre(3);
    } catch (const StockInsuffisantException& e) {
        cout << e.what() << endl;
    }

    try {
        p1.vendre(8);
    } catch (const StockInsuffisantException& e) {
        cout << e.what() << endl;
    }

    try {
        p1.vendre(4);
    } catch (const StockInsuffisantException& e) {
        cout << e.what() << endl;
    }

    return 0;
}
