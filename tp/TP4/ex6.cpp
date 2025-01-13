#include <iostream>
#include <vector>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

/**Verifie si un tableau 2D d'entier est carre (meme nombre de lignes et de colonnes)
 * @param tab le tableau 2D d'entier
 * @return true si le tableau est carre false sinon
 */
bool est_carre(vector<vector<int>> tab) {
    int n = tab.size();
    for (int i = 0; i < n; i++) {
        if (tab.at(i).size() != n) {
            return false;
        }
    }
    return true;
}

/**Est-il un carée magique ?
 * @parma tab un tableau 2d d'entier
 * @return booléen indiquant si oui ou non
 */
bool est_magique(vector<vector<int>> tab) {
    if (!est_carre(tab)) {
        return false;
    }

    int v = 0;
    int l = tab.size();
    int nemo;
    for (int i = 0; i < l; i++) {
        v+=tab.at(0).at(i);
    }

    for (int i = 1; i < l; i++) {
        nemo = 0;
        for (int j = 0; j < l; j++) {
            nemo += tab.at(i).at(j);
        }
        if (nemo != v) {
            return false;
        }
    }

    for (int i = 0; i < l; i++) {
        nemo = 0;
        for (int j = 0; j < l; j++) {
            nemo += tab.at(j).at(i);
        }
        if (nemo != v) {
            return false;
        }
    }

    nemo = 0;
    for (int i = 0; i < l; i++) {
        nemo+=tab.at(i).at(i);
    }
    if (nemo != v) {
        return false;
    }

    nemo = 0;
    for (int i = 0; i < l; i++) {
        nemo+=tab.at(l-1-i).at(i);
    }
    if (nemo != v) {
        return false;
    }

    return true;
}

/**Affiche un tableau 2d d'entier et si ce dernier est magique ou non
 * @param v le tableau 2d d'entier à afficher
 */
void afficher_tableau_2d_b(vector<vector<int>> v) {
    cout << "Le carre : " << endl;

    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            cout << "{";
        }
        for (int j = 0; j < v.at(0).size(); j++) {
            if (j == 0) {
                cout << "{" << v.at(i).at(j) << ",";
            } else if (j == v.at(i).size()-1) {
                cout << v.at(i).at(j) << "}" << endl;
            } else {
                cout << v.at(i).at(j) << ",";
            }
        }
        if (i == v.size()-1) {
            cout << "}" << endl;
        }
    }
    if (est_magique(v)) {
        cout << "est un carre magique !" << endl;
    } else {
        cout << "n'est pas un carre magique!" << endl;
    }
}

int main() {
    vector<vector<int>> tab1 = {{2,7,6},{9,5,1},{4,3,8}};
    vector<vector<int>> tab2 = {{8,1},{3,5,7},{4,9,2}};
    vector<vector<int>> tab3 = {{8,1,6},{3,5,7},{4,9,2},{4,8,9}};
    vector<vector<int>> tab4 = {{4,14,15,1},{9,7,6,12},{5,11,10,8},{16,2,3,13}};
    afficher_tableau_2d_b(tab1);
    afficher_tableau_2d_b(tab2);
    afficher_tableau_2d_b(tab3);
    afficher_tableau_2d_b(tab4);

    return 0;
}