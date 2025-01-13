#include <iostream>
#include <cmath>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

bool estPremier(int n){
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    if (n == 1 | n == 0) {
        return false;
    }
    return true;
}

void test() {
    ASSERT(estPremier(14)==false);
    ASSERT(estPremier(7)==true);
    ASSERT(estPremier(19)==true);
    ASSERT(estPremier(1)==false);
}

void afficherPremier(int n) {
    for (int i = 0; i <= n; i++) {
        if (estPremier(i)) {
            cout << "Le nombre " << i << " est premier."  << endl;
        }
    }
}

void afficherPremierBis(int n) {
    int compteur = 0, i = 0;
    while (i <= n) {
        if (estPremier(compteur)) {
            cout << "Le nombre " << compteur << " est premier." << endl;
            i+=1;
        }
        compteur += 1;
    }
}

int main()
{
    test();
    afficherPremier(20);
    afficherPremierBis(10);
    return 0;
}

