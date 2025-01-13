#include <iostream>
#include <vector>
using namespace std;

struct Participant {
    string nom;
    string prenom;
    bool dejeuner;
    bool diner;
    bool hotel;
    int etoileshotel;
    bool conjoint;
};

int montant(Participant p) {
    int facture = 0;

    if (p.dejeuner) {
        facture += 15;
    }
    if (p.diner) {
        facture += 35;
    }

    if (p.conjoint) {
        facture *= 2;
    }

    if (p.hotel) {
        if (p.etoileshotel == 2) {
            facture += 75;
        } else {
            facture += 100;
        }
    }

    return facture;
}

int nombre_dejeuner(vector<Participant> p) {
    int repas;
    for (int i = 0; i < p.size(); i++) {
        if (p.at(i).dejeuner) {
            repas += 1;
        }
    }
    return repas;
}

int main() {

    return 0;
}