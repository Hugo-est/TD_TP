#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

/**Applique une opération sur deux nombres flottants
 * @param v1 un nombre flottant
 * @param v2 un nombre flottant
 * @param op un caractère représentant l'opération à effectuer: '+', '-', '*', '/'
 * @return un nombre réel, le résultat de l'opération retenue
 **/
float operation (float v1, float v2, char op ){
    switch (op)
    {
    case '+':
        return v1+v2;

    case '-':
        return v1-v2;
    
    case '*':
        return v1*v2;

    case '/':
        return v1/v2;

    default:
        break;
    }
}

/** Tests pour la fonction operation **/
void operationTest(){
    ASSERT( operation(6, 3, '+') ==  9 );
    ASSERT( operation(6, 3, '-') ==  3 );
}

/** Programme principal qui lance les tests, puis demande à
 * l'utilisateur de taper une expression comme '4 + 1' et affiche le
 * résultat. Puis demande si l'utilisateur veut recommencer.
 * @return 0 - Arrêt normal du programme.
 */
int main(){
    double a, b;
    char ops, again;
    do {
        cout << "Entrez une expression simple (du type 2 + 3) : ";
        cin >> a >> ops >> b;

        cout << a << " " << ops << " " << b << " = " << operation(a, b, ops) << endl;

        cout << "Voulez-vous recommencez ? (o/n) ";
        cin >> again;
        
    } while (again == 'o');

    return 0;
}
