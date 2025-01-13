#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

double absolue(double nb) {
    if (nb<0) {
        return -nb;
    } else {
        return nb;
    }
}

void vraiFaux(bool vraiFaux){
    if (vraiFaux) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

bool egal(double a, double b, double e = 1e-5) {
    return (absolue(a-b) <= e*absolue(a)) & (absolue(a-b) <= e*absolue(b));
}

void test() {
    ASSERT(egal(absolue(-2.5), absolue(2.5)) == true);
}

int main()
{
    test();
    vraiFaux(egal(1.000001,0.999999,1e-5));
    vraiFaux(egal(1.000001,0.999999,1e-7));
    return 0;
}

