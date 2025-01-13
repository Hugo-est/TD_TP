#include <iostream>
#include <vector>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

/**Calcule le carré d'un nombre entier
 * @param a un entier
 * @return a^2
 */
int carre(int a) {
    return a*a;
}

/**Affiche un tableau d'entier de type vector
 * @param t le tableau d'entier de type vector
 */
void afficher_tableau(vector<int> t) {
    for  (int i = 0; i < t.size(); i++) {
        cout << i << "^2 = " << t.at(i) << endl; 
    }
}

int main()
{
    ASSERT(1==2);
    int val;
    do {
        cout << "Entrez un entier compris entre 1 et 200 : ";
        cin >> val;
    } while(val <= 0 or val > 200);

    cout << "Lecture de l'entier : " << val << endl;

    vector<int> res;

    for (int i = 0; i <= val; i++) {
        res.push_back(carre(i));
    }

    afficher_tableau(res);

    for (int i = res.size()-1;i > 0; i--) {
        cout << "res.at(" << i << ") = " << res.at(i) << '-' << res.at(i-1) <<" = ";
        res.at(i) = res.at(i) - res.at(i-1);
        cout << res.at(i) << endl;
    }

    return 0;
}
