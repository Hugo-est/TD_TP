#include <iostream>
#include <cmath>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

/**Calcule les racines d'un polinome du second degrés
 * @param a un nombre flottant, le coefficient du terme en x carre
 * @param b un nombre flottant, le coefficient du terme en x
 * @param c un nombre flottant, le coefficient du terme constant
 * @param x1 une eventuel racine
 * @param x2 une eventuel racine
 * @return le nombre de racine du polinome
 **/
int equation(double a, double b, double c, double& x1, double& x2) {
    double delta = b*b - (4*a*c);

    if (delta > 0) {
        x1 = (-b+sqrt(b*b-(-4*a*c)))/(2*a);
        x2 = (-b-sqrt(b*b-(-4*a*c)))/(2*a);
        return 2;
    } else if (delta == 0) {
        x1 = -b/(2*a);
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int nb_racine;
    double a, b, c, x1, x2;
    char again;

    do {
        cout << "Entrez les 3 coefficients du polinome : " << endl;
        cin >> a >> b >> c;
        nb_racine = equation(a, b, c, x1, x2);

        if (nb_racine == 2) {
            cout << "Ce polinome a deux racine egales a : " << x1 << " et : " << x2 << endl;
        } else if (nb_racine == 1) {
            cout << "Ce polinome a une racine unique egale a : " << x1 << endl;
        } else {
            cout << "Ce polinome n'a pas de racine !" << endl;
        }

        cout << "Voulez-vous recommencer ? (o/n) ";
        cin >> again;

    } while (again == 'o');

    return 0;
}
