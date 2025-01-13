#include <iostream>
using namespace std;

void boucle_while() {
    int n, somme = 0, compteur = 0;

    cout << "Entrez un entier : ";
    cin >> n;

    while (compteur <= n) {
        somme += compteur * compteur;
        compteur++;
    }

    cout << "La somme des " << n << " premiers carrée est : " << somme << endl;
}

void boucle_do_while() {
    int n, somme = 0, compteur = 0;

    cout << "Entrez un entier : ";
    cin >> n;

    do {
        somme += compteur * compteur;
        compteur++;
    } while (compteur <= n);

    cout << "La somme des " << n << " premiers carrée est : " << somme << endl;
}

void boucle_for() {
    int n, somme = 0;

    cout << "Entrez un entier : ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        somme += i * i;
    }
    

    cout << "La somme des " << n << " premiers carrée est : " << somme << endl;
}

int main() {
    char encore;

    do {
        boucle_while();

        cout << "Encore ? ";
        cin >> encore; 
    } while (encore == 'o');

    do {
        boucle_do_while();
        
        cout << "Encore ? ";
        cin >> encore; 
    } while (encore == 'o');

    do {
        boucle_for();
        
        cout << "Encore ? ";
        cin >> encore; 
    } while (encore == 'o');

    return 0;
}