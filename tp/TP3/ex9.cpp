#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

/**Calcule le terme de rang n de la suite de Fibonacci de facon iterative
 * @param n le rang du terme de la suite
 * @return la valeur du terme de rang n
 */
long unsigned int fibonacciIter(int n) {
    long unsigned int un = 1, un_1 = 1, un_2 = 0;
    
    if (n == 0 | n == 1) {
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        un_2 = un_1 + un;
        un = un_1;
        un_1 = un_2;
    }

    return un_2;
}

/**Calcule le terme de rang n de la suite de Fibonacci de facon recursif
 * @param n le rang du terme de la suite (positif)
 * @return la valeur du terme de rang n
 */
long unsigned int fibonacciRec(int n) {
    if (n == 0 | n == 1) {
        return 1;
    } else {
        return fibonacciRec(n-1) + fibonacciRec(n-2);
    }

}


void testFibonacciIter() {
    ASSERT(fibonacciIter(1) == 1);
    ASSERT(fibonacciIter(0) == 1);
    ASSERT(fibonacciIter(4) == 5);
    ASSERT(fibonacciIter(6) == 13);
    ASSERT(fibonacciIter(2) == 2);
}

void testFibonacciRec() {
    ASSERT(fibonacciIter(1) == 1);
    ASSERT(fibonacciIter(0) == 1);
    ASSERT(fibonacciIter(4) == 5);
    ASSERT(fibonacciIter(6) == 13);
    ASSERT(fibonacciIter(2) == 2);
}


int main()
{
    testFibonacciIter();
    testFibonacciRec();

    cout << "-----------------------------------------------------" << endl;
    cout << "Calcul du terme de rang 30 de facon iterative :" << endl;
    cout << "Calcul en cours..." << endl;
    cout << "Calcul effectue : U30 = " << fibonacciIter(30) << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Calcul du terme de rang 30 de facon recursive :" << endl;
    cout << "Calcul en cours..." << endl;
    cout << "Calcul effectue : U30 = " << fibonacciRec(30) << endl;
    cout << "-----------------------------------------------------" << endl << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Calcul du terme de rang 45 de facon iterative :" << endl;
    cout << "Calcul en cours..." << endl;
    cout << "Calcul effectue : U45 = " << fibonacciIter(45) << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Calcul du terme de rang 45 de facon recursive :" << endl;
    cout << "Calcul en cours..." << endl;
    cout << "Calcul effectue : U45 = " << fibonacciRec(45) << endl;
    cout << "-----------------------------------------------------" << endl << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Calcul du terme de rang 50 de facon iterative :" << endl;
    cout << "Calcul en cours..." << endl;
    cout << "Calcul effectue : U50 = " << fibonacciIter(50) << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Calcul du terme de rang 50 de facon recursive :" << endl;
    cout << "Calcul en cours..." << endl;
    cout << "Calcul effectue : U50 = " << fibonacciRec(50) << endl;
    cout << "-----------------------------------------------------" << endl;
    return 0;
}
