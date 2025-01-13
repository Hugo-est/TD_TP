#include <iostream>
using namespace std;


void affiche_pair_impair(){
    int nombre;

    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    if (nombre % 2 == 0) {
        cout << "Le nombre " << nombre << " est pair." << endl;
    } else {
        cout << "Le nombre " << nombre << " est impair." << endl;
    }
}

void absolu(){
    int nombre;

    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    if (nombre < 0) {
        cout << "La valeur absolu de " << nombre << " est : "  << -nombre << endl;
    } else {
        cout << "La valeur absolu de " << nombre << " est : "  << nombre << endl;
    }
}

void lePlusGrand() {
    int a, b, c;

    cout << "Entrez trois nombres entiers : ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "Le nombre le plus grand est : " << a << endl ;
        } else {
            cout << "Le nombre le plus grand est : " << c << endl ;
        }
    } else {
        if (b > c) {
            cout << "Le nombre le plus grand est : " << b << endl ;
        } else {
            cout << "Le nombre le plus grand est : " << c << endl ;
        }
    }
}

int main() {
    char encore;
    do {
        affiche_pair_impair();

        cout << "Encore ? ";
        cin >> encore; 
    } while (encore == 'o');

    do {
        absolu();
        
        cout << "Encore ? ";
        cin >> encore; 
    } while (encore == 'o');

    do {
        lePlusGrand();
        
        cout << "Encore ? ";
        cin >> encore; 
    } while (encore == 'o');

    return 0;
}