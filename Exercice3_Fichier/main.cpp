#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;

void lireFichier(const string& nomFichier) {
    ifstream fichier(nomFichier);

    if (!fichier.is_open()) {
        throw runtime_error("Erreur : impossible d'ouvrir le fichier " + nomFichier);
    }

    string ligne;
    cout << "Contenu du fichier '" << nomFichier << "' :" << endl;

    while (getline(fichier, ligne)) {
        cout << ligne << endl;
    }

    fichier.close();
}

int main() {
    string nomFichier;

    try {
        nomFichier = "exemple.txt"; 
        lireFichier(nomFichier);
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    try {
        nomFichier = "fichier_inexistant.txt";
        lireFichier(nomFichier);
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
