#include <iostream>
#include <stdexcept> 
using namespace std;

double diviser(int a, int b) {
    if (b == 0) {
        throw runtime_error("Erreur : division par zéro impossible !");
    }
    return static_cast<double>(a) / b;
}

int main() {
    int x, y;
    
    try {
        x = 10; y = 2;
        cout << x << " / " << y << " = " << diviser(x, y) << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    try {
        x = 5; y = 0;
        cout << x << " / " << y << " = " << diviser(x, y) << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    try {
        x = 7; y = 3;
        cout << x << " / " << y << " = " << diviser(x, y) << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
