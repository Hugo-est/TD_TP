#include <iostream>
#include <vector>
using namespace std;

/**La fonction cree_tableau qui initialise les valeurs d'un tableau 2d d'entiers
 * @param v l'entier pour initialiser
 * @param l le nombre de ligne
 * @param c le nombre de colonne
 * @return le tableau2d initialiser
 */
vector<vector<int>> cree_tableau(int v, int l, int c) {
    vector<vector<int>> lst (c);
    vector<int> ligne;
    for (int i = 0; i < c; i++) {
        ligne.push_back(v);
    }
    for (int i = 0; i < l; i++) {
        lst.push_back(ligne);
    }
    
    return lst;
}

int main() {
    return 0;
}