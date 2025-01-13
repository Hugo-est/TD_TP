#include <iostream>
#include <vector>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

bool contient(vector<int> tab, int x) {
    for (int i = 0; i < tab.size(); i++) {
        if (tab.at(i) == x) {
            return true;
        }
    }
    return false;
}

std::vector<int> intersection(vector<int> tab1, vector<int> tab2) {
    vector<int> tab_retours;
    for (int i = 0; i < tab1.size(); i++) {
        if (contient(tab2, tab1.at(i))) {
            if (!contient(tab_retours, tab1.at(i))) {
                tab_retours.push_back(tab1.at(i));
            }
        }
    }
    return tab_retours;
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

void rapport_x(vector<int> tab, int x, vector<int>& plus_petit, vector<int>& plus_grand) {
    for (int i = 0; i < tab.size(); i++) {
        if (tab.at(i) > x) {
            plus_petit.push_back(tab.at(i));
        } else {
            plus_grand.push_back(tab.at(i));
        }
    }
}

void assert_insertion() {
    vector<int> tab1 = {1,2,6,10,5,6};
    vector<int> tab2 = {7,6,6,10};
    afficher_tableau(intersection(tab1, tab2));
    vector<int> plus_petit, plus_grand;
    rapport_x(tab1, 4, plus_petit, plus_grand);
    cout << "Plus petit : " << endl;
    afficher_tableau(plus_petit);
    cout << "Plus grand : " << endl;
    afficher_tableau(plus_grand);
}

int main() {
    assert_insertion();
    return 0;
}
