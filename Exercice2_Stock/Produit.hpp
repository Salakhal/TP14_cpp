#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class StockInsuffisantException : public exception {
private:
    string message;
public:
    StockInsuffisantException(const string& msg) : message(msg) {}
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

class Produit {
private:
    string nom;
    int stock;

public:
    Produit(const string& n, int s) : nom(n), stock(s) {}

    void vendre(int quantite) {
        if (quantite > stock) {
            throw StockInsuffisantException("Erreur : stock insuffisant pour le produit " + nom);
        }
        stock -= quantite;
        cout << quantite << " unités de " << nom << " vendues. Stock restant : " << stock << endl;
    }

    void afficherStock() const {
        cout << "Produit : " << nom << ", Stock : " << stock << endl;
    }
};

#endif
