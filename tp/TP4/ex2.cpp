#include <iostream>
#include <vector>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

std::vector<int> cree_tableau(int n) {
    vector<int> tab;
    int a;
    cout << "Initialisation du tableau......." << endl;
    for (int i = 0; i < n; i++) {
        cout << "Donne la valeur de tab.at(" << i << ") : ";
        cin >> a;
        tab.push_back(a);
    }

    return tab;
}

void afficher_tableau(vector<int> tab) {
    for (int i = 0; i < tab.size(); i++) {
        if (i%5 == 4) {
            cout << tab.at(i) << endl;
        } else if (i == tab.size()-1) {
            cout << tab.at(i) << endl;
        } else {
            cout << tab.at(i) << ";";
        }
    }
}

double moyenne_tableau(vector<int> tab) {
    double moyenne = 0;
    for (int i = 0; i < tab.size(); i++) {
        moyenne += tab.at(i);
    }
    return moyenne/tab.size()*1.0;
}

int maximum_tableau(vector<int> tab) {
    int max = tab.at(0);
    for (int i = 1; i < tab.size(); i++) {
        if (max < tab.at(i)) {
            max = tab.at(i);
        }
    }
    return max;
}

bool est_trier_croissant(vector<int> tab) {
    for (int i = 0; i < tab.size()-1; i++) {
        if (tab.at(i+1) - tab.at(i) < 0) {
            return false;
        }
    }
    return true;
}

bool est_trier_decroissant(vector<int> tab) {
    for (int i = 0; i < tab.size()-1; i++) {
        if (tab.at(i+1) - tab.at(i) > 0) {
            return false;
        }
    }
    return true;
}

vector<int> tri_bulle(vector<int> tab) {
    int n = tab.size();
    int passage = 0;
    int tmp = 0;
    bool permutation = false;
    do {
        permutation = false;
        for (int i = 0; i < n-1; i++) {
            if (tab.at(i) > tab.at(i+1)) {
                tmp = tab.at(i);
                tab.at(i) = tab.at(i+1);
                tab.at(i+1) = tmp;
                permutation = true;
            }
        }
        passage += 1;
    } while(permutation == true);

    return tab;
}

int main()
{
    vector<int> t2 = cree_tableau(7);

    afficher_tableau(t2);

    cout << "La moyenne des elements est de : " << moyenne_tableau(t2) << endl;
    cout << "Le plus grand des elements a comme valeur : " << maximum_tableau(t2) << endl;
    if (est_trier_croissant(t2) | est_trier_decroissant(t2)) {
        cout << "Le tableau t2 est trie" << endl;
    } else {
        cout << "Le tableau t2 n'est pas trie" << endl;
    }
    cout << "Le tableau trie vaut : " << endl;
    afficher_tableau(tri_bulle(t2));
    return 0;
}
