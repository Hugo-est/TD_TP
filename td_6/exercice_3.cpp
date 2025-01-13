#include <iostream>
#include <vector>
using namespace std;

void afficher_tableau_2d(vector<vector<int>> v) {
    for (int i = 0; i < v.at(0).size(); i++) {
        if (i == 0) {
            cout << "{";
        } else if (i == v.size()) {
            cout << "}" << endl;
        }

        for (int j = 0; j < v.size(); j++) {
            if (j == 0) {
                cout << "{" << v.at(i).at(j) << ",";
            } else if (j == v.size()-1) {
                cout << v.at(i).at(j) << "}" << endl;
            } else {
                cout << v.at(i).at(j) << ",";
            }
            
        }
    }
}

/**Affiche un tableau 2d d'entier
 * @param v le tableau 2d d'entier à afficher
 */
void afficher_tableau_2d_b(vector<vector<int>> v) {
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
}

int compte(vector<vector<int>> v) {
    int compteur = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(0).size(); j++) {
            if (v.at(i).at(j) >= 10) {
                compteur++;
            }
        }
    }

    return compteur;
}

/**Vérifie si l'entier x est dans le tableau 2d
 * @param v le tableau 2d d'entier
 * @param x le nombre auquel on vérifie la présence
 * @return un booléen indiquant la pré
 */
bool est_dedans(vector<vector<int>> v, int x) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(0).size(); j++) {
            if (v.at(i).at(j) == x) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    vector<vector<int >>Tab2d = {{0 ,1 ,2 ,3},{10 ,11 ,12 ,13},{20 ,21 ,22 ,23}};
    afficher_tableau_2d_b(Tab2d);
    cout << compte(Tab2d) << endl;
    cout << est_dedans(Tab2d, 13);
    
    return 0;
}