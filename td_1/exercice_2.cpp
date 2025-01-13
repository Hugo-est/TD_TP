#include <iostream>
using namespace std;

int main() {
    int nombre, unites, dizaines, centaines, milliers, nombreInverse;

    cout << "Entrez un nombre entier a 4 chiffres : ";
    cin >> nombre;

    milliers = (nombre / 1000) % 10;
    centaines = (nombre / 100) % 10;
    dizaines = (nombre / 10) % 10;
    unites = nombre % 10;

    nombreInverse = unites * 1000 + dizaines * 100 + centaines * 10 + milliers;

    cout << "L'inverse du nombre " << nombre << " est : " << nombreInverse << " et leurs sommes est : " << nombre + nombreInverse << endl;

    return 0;
}