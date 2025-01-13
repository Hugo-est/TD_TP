/** (1) Il permutes les valeurs n1 et n2
 *  (2) Non. On obtient n2 = n2 et n1 = n2
 *  (3) (le prgramme)
 */

#include <iostream>
using namespace std;

void programme_base() {
    int n1, n2;
    n1 = 7;
    n2 = 4;

    n1 = n2;
    n2 = n1;

    cout << n1 << endl;
    cout << n2 << endl;
}

void programme_corriger() {
    int n1, n2, tmp;
    n1 = 7;
    n2 = 4;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    cout << n1 << endl;
    cout << n2 << endl;
}

int main() {
    programme_base();
    programme_corriger();
    
    return 0;
}