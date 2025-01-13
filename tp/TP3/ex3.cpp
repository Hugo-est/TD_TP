#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

void afficher_bool(bool vrai_faux) {
    if (vrai_faux) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

int main()
{
    afficher_bool(true);
    afficher_bool(2 == 1);
    return 0;
}
