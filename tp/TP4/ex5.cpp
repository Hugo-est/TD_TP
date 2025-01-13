#include <iostream>
#include <vector>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

void afficher_tableau_double(vector<vector<int>> tab) {
    for (unsigned long int i = 0; i < tab.size(); i++) {
        for (unsigned long int j = 0; j < tab.at(i).size(); j++) {
            if (j == tab.at(i).size()-1) {
                cout << tab.at(i).at(j) << endl;
            } else {
                cout << tab.at(i).at(j) << "; ";
            }
        }
    }
}

int nombre_10(vector<vector<int>> tab) {
    int compteur = 0;
    for (unsigned long int i = 0; i < tab.size(); i++) {
        for (unsigned long int j = 0; j < tab.at(i).size(); j++) {
            if (tab.at(i).at(j) >= 10) {
                compteur += 1;
            }
        }
    }
    return compteur;
}

bool est_dedans(vector<vector<int>> tab, int x, int& i_d, int& j_d) {
    bool dedans = false;
    for (unsigned long int i = 0; i < tab.size(); i++) {
        for (unsigned long int j = 0; j < tab.at(i).size(); j++) {
            if (tab.at(i).at(j) == x) {
                dedans = true;
                i_d = i;
                j_d = j;
            }
        }
    }
    return dedans;
}

int main() {
    int i_d,j_d;
    vector<vector<int>> t = {{1,2,34,5,10}, {2,4,7,8,9}, {3,4,5,67,8}};
    afficher_tableau_double(t);
    cout << nombre_10(t) << endl;

    if (est_dedans(t, 8, i_d, j_d)) {
        cout << "(" << i_d << ";" << j_d << ")" << endl;
    } else {
        cout << "8 n'est pas dans t." << endl;
    }
    
    if (est_dedans(t, 12, i_d, j_d)) {
        cout << "(" << i_d << ";" << j_d << ")" << endl;
    } else {
        cout << "12 n'est pas dans t." << endl;
    }
    return 0;
}
