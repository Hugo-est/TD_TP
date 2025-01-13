// (1) Le maximum du tableau

#include <iostream>
#include <vector>
using namespace std;

/**Retourne le minimum d'un tableau vector passée en entré
 * parmar : vector<int>, le tableau d'entier
 */
int minimum(vector<int> t) {
    int m = t.at(0);
    for (int i = 1; i < t.size(); i++) {
        if (m > t.at(i)) {
            m = t.at(i);
        }
    }
    return m;
}

int main() {
    vector<int> t = {5, -1, 3, 7, -4, 8, 4};
    cout << minimum(t) << endl;
    return 0;
}