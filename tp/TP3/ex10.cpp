#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

char premier_indice(string str) {
    return str.at(0);
}

bool peut_couper(string str, string& a, string& b, int indice) {
    for (int i = 0; i < indice; i++) {
        a += str.at(i);
    }

    for (int i = indice + 1; i < str.length(); i++) {
        b += str.at(i);
    }

    return str.length() >= indice + 1;
}

bool ajout_maj(string& str, int indice) {
    if (str.at(indice) >= 97 & str.at(indice) <= 122) {
        str.at(indice) -= 32;
        return true;
    } else {
        return false;
    }
}

bool decoupage(string str, string& a, string& b, char val) {
    int indice;

    for (int i = 0; i < str.length(); i++) {
        if (str.at(i) == val) {
            indice = i;
            break;
        }
    }

    return peut_couper(str, a, b, indice);
}

int main() {
    string nom, prenom, email, tmp;
    cout << "Donnez une adresse email : ";
    cin >> email;
    decoupage(email, tmp, email, '@');
    decoupage(tmp, prenom, nom, '.');
    ajout_maj(prenom, 0);
    ajout_maj(nom, 0);
    cout << "Le prenom est : " << prenom << ". Le nom est : " << nom << endl;

    return 0;
}

