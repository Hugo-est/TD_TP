/**Les valeurs de Tab2d.at(0).at(0) est 0,
 *                Tab2d.at(0).at(1) est 1
 *                Tab2d.at(2).at(3) est 23
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> Tab2d = {{0,1,2,3}, {10,11,12,13}, {20,21,22,23}};
    cout << "Il y a " << Tab2d.size() << " lignes." << endl;
    cout << "Il y a " << Tab2d.at(0).size() << " lignes." << endl;

    return 0;
}