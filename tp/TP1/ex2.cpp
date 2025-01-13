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

    if (op == '+'){
        return v1+v2;
    } else if (op == '-'){
        return v1-v2;
    } else if (op == '*'){
        return v1*v2;
    } else {
        return v1/v2;
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
    operationTest();

    string expression;
    float v1=0,v2=0;
    char op, rejoue = 'o';

    do {
        cout << "Entrer une expression simple : ";
        cin >> expression;
        op = ' ';
        v1 = 0;  
        v2 = 0;
        
        for (long unsigned int i = 0; i <= expression.length()-1; i++){
            
            if ((expression[i] == '+') | (expression[i] == '-') | (expression[i] == '*') | (expression[i] == '/')) {
                
                op = expression[i];
                
            } else {
                
                if ((op == '+') | (op == '-') | (op == '*') | (op == '/')) {
                    if (v2 == 0){
                        v2 = expression[i]-48;
                    } else {
                        v2 = v2*10+expression[i]-48;
                    } 
                } else {
                    if (v1 == 0){
                        v1 = expression[i]-48;
                    } else {
                        v1 = v1*10+expression[i]-48;
                    } 
                } 
            }
        }
        
        cout << op << "," << v1 << "," << v2<< endl;
        cout << "L'expression " << expression << " = " << operation(v1,v2,op) << endl;

        cout << "Avez vous d'autre calculs à faire ?" << endl;
        cin >> rejoue;
        
    } while (rejoue == 'o');

    return 0;
}

