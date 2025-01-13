#include <iostream>
using namespace std;

const float M_EN_P = 3.28084;

/**
 * Converti une mesure en metres en un mesure en pieds
 * @param m la mesure en metres
 * @return la mesure en pieds
 */
float m2p(float m) {
    return m * M_EN_P;
}


main(){
    float p, m;

    cout << "Saisir la valeur (en metres) a convertir en pieds : " ;
    cin >> m;

    p = m2p(m) ;
    cout << m << " mètres = " << p << " pieds" << endl;

    return 0;
}


