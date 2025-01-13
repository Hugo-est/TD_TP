#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

/**Calcul la somme de n premiers carres pour tout n supérieur ou egal a 0
 * @param n le dernier entier de la somme
 * @return le resultat de cette somme
 **/
int somme_carre(int n) {
    if (n == 1) {
        return 1;
    } else if (n > 1) {
        return n*n+somme_carre(n-1);
    }
}

/**Test de la fonction somme_carre**/
void test_somme_carre() {
    ASSERT(somme_carre(2) == 5);
    ASSERT(somme_carre(4) == 30);
}

int main()
{
    test_somme_carre();
    cout << "La somme des n premier carre avec n = 4 est " << somme_carre(4) << endl;
    cout << "La somme des n premier carre avec n = 16 est " << somme_carre(16) << endl;
    return 0;
}
