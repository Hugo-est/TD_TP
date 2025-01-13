#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl
double const PI = 3.1415926535;

long puissance(float a, int n) {
    long result = a;
    for (int i = 1; i<=n; i++) {
        result *= a;
    }
    return result;
}

double pcercle(double rayon) {
    return rayon*2*PI;
}

double scercle(double rayon) {
    return PI*puissance(rayon,2);
}

double vsphere(double rayon) {
    return (4/3)*PI*puissance(rayon,3);
}

double pcarre(double cote) {
    return 4*cote;
}

double scarre(double cote) {
    return puissance(cote,2);
}

double vcube(double cote) {
    return puissance(cote,3);
}

bool affichage(double a, int type) {
    if ((type == 1 | type == 2) & a >= 0) {
        if (type == 1) {
            cout << "Le perimetre d'un cercle de rayon " << a << " est : " << pcercle(a) << endl;
            cout << "La surface d'un cercle de rayon " << a << " est : " << scercle << endl;
            cout << "La volume d'une sphere de rayon " << a << " est : " << vsphere << endl;
            return true;
        }

        if (type == 2) {
            cout << "Le perimetre d'un carre de rayon " << a << " est : " << pcarre(a) << endl;
            cout << "La surface d'un carre de rayon " << a << " est : " << scarre << endl;
            cout << "La volume d'une cube de rayon " << a << " est : " << vcube << endl;
            return true;
        }
    } else {
        cout << "Message d'erreur." << endl;
        return false;
    }
}

void test() {
    ASSERT(pcercle(2) == 12.56);
    ASSERT(scercle(2) == 12.56);
    ASSERT(vsphere(2) == 33.5);
    
    ASSERT(pcarre(2) == 9);
    ASSERT(pcarre(2) == 5.07);
    ASSERT(vcube(2) == 11.4);
}

int main() {
    test();

    int type;
    double cote;
    char again;

    do {
        cout << "Saisir le type (1 pour cercle ou 2 pour carre) et la valeur du rayon ou du cote : ";
        cin >> type >> cote;
        affichage(cote, type);
        cout << "Voulez-vous recommencer ? ";
        cin >> again;
    } while (again == 'o');

    return 0;
}

