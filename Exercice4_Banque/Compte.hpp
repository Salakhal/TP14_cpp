#ifndef COMPTE_HPP
#define COMPTE_HPP

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;


class MontantInvalideException : public exception {
private:
    string message;
public:
    MontantInvalideException(const string& msg) : message(msg) {}
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};


class SoldeInsuffisantException : public exception {
private:
    string message;
public:
    SoldeInsuffisantException(const string& msg) : message(msg) {}
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};


class Compte {
private:
    string titulaire;
    double solde;

public:
   
    Compte(const string& t, double s = 0.0) : titulaire(t), solde(s) {}

    void deposer(double montant) {
        if (montant < 0) {
            throw MontantInvalideException("Erreur : montant de dépôt invalide pour " + titulaire);
        }
        solde += montant;
        cout << "Dépôt de " << montant << " effectué. Nouveau solde : " << solde << endl;
    }

    void retirer(double montant) {
        if (montant < 0) {
            throw MontantInvalideException("Erreur : montant de retrait invalide pour " + titulaire);
        }
        if (montant > solde) {
            throw SoldeInsuffisantException("Erreur : solde insuffisant pour " + titulaire);
        }
        solde -= montant;
        cout << "Retrait de " << montant << " effectué. Nouveau solde : " << solde << endl;
    }

    void afficherSolde() const {
        cout << "Titulaire : " << titulaire << ", Solde : " << solde << endl;
    }
};

#endif
