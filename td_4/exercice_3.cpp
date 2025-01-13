#include <iostream>
#include <vector>
using namespace std;

void affiche_tableau(vector<int> t){
    for (int i = 0; i < t.size(); i++) {
        if (i == 0) {
            cout << "[ " << t.at(i) << " ";
        } else if (i == t.size()-1) {
            cout << t.at(i) << " ]" << endl;
        } else {
            cout << t.at(i) << " ";
        }
    }
}

bool tableau_egaux(vector<int> t, vector<int> t1) {
    int taille;

    if (t.size() == t1.size()) {
        taille = t.size();
    } else {
        return false;
    }

    for (int i = 0; i < taille; i++) {
        if (t.at(i) != t1.at(i)) {
            return false;
        }
    }
    return true;
}

/**Retourne un booleen indiquant si le tableau passer en entre est trie
 * @param t un tableau d'entier
 * @return vrai ou faux
 */
bool trier(vector<int> t) {
    char crois = 'o';

    for (int i = 0; i < t.size()-1; i++) {
        if (t.at(i) == t.at(i+1)) {
            continue;
        } else if ((crois == 'o' | crois == 'c') & t.at(i) < t.at(i+1)) {
            crois = 'c';
            continue;
        } else if ((crois == 'o' | crois == 'd') & t.at(i) > t.at(i+1)) {
            crois = 'd';
            continue;
        } else {
            return false;
        }
    }
    return true;
}

bool trier_bis(vector<int> t) {
    bool est_croissant = true;
    bool est_decroissant = true;

    for (int i =0; i < t.size()-1 ; i++) {
        if (t.at(i) < t.at(i+1)) {
            est_decroissant == false;
        } else if (t.at(i) > t.at(i+1)) {
            est_croissant == false;
        }
    }
    return est_croissant || est_decroissant;
}

int plus_grand(vector<int> t) {
    int compteur = 0;

    for (int i = 0; i < t.size(); i++) {
        if (10 <= t.at(i)) {
            compteur += 1;
        }
    }

    return compteur;
}

int main() {
    vector<int> t = {5, -1, 3, 7, -4, 8, 4};
    vector<int> t2 = {5, -1, 3, 7, -3, 8, 4};
    vector<int> t3 = {5, -10, 3, 7, -3, 8, 4, 12, 34, 8, 9, 15};
    vector<int> t1 = {5, -1, 3, 7, 8, 4};
    vector<int> t4 = {5, 5, 5, 5};
    vector<int> t5 = {5,5,4,3,0};

    cout << trier(t) << endl;
    cout << trier(t4) << endl << trier(t5) << endl;

    return 0;
}