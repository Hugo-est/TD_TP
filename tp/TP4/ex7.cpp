#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double carre(double x) {
    return x*x;
}

int nombreChiffre(vector<double> tab, int x) {
    int nombreChiffre = 0;
    for (int i = 0; i < tab.size(); i++) {
        if (floor(tab.at(i)) == x) {
            nombreChiffre += 1;
        }
    }
    return nombreChiffre;
}

int main()
{
    int nombreNote, freqMax = -1;
    double note, moyenne = 0, variance = 0, ecartType = 0;
    vector<double> notes;
    vector<int> nombreNotes, freqMaxTab = {freqMax};

    do {
        cout << "Combien de note devez vous rentrez (un entier de 1 a 100 inclus) : ";
        cin >> nombreNote;
    } while (nombreNote > 100 or nombreNote < 1);

    for (int i = 1; i <= nombreNote; i++) {
        do {
            cout << "Entrez la " << i << " eme note reelle (entre 0 et 20 inclus) : ";
            cin >> note;
        } while (note > 20 or note < 0);

        moyenne += note;
        notes.push_back(note);
    }

    moyenne = moyenne / nombreNote;

    for (int i = 0; i < nombreNote; i++) {
        variance += carre(notes.at(i) - moyenne);
    }

    variance = variance / nombreNote;
    ecartType = sqrt(variance);

    cout << endl << "Resultats :" << endl;

    cout << "\t La moyenne des notes est : " << moyenne << endl;
    cout << "\t La variance des notes est : " << variance << endl;
    cout << "\t L'ecart types des notes est : " << ecartType << endl;

    for (int i = 0; i <= 20; i++) {
        int n = nombreChiffre(notes, i);

        if (n > freqMax) {
            freqMaxTab = {n, i};
            freqMax = n;
        } else if (n == freqMax) {
            freqMaxTab.push_back(n);
            freqMaxTab.push_back(i);
        }

        nombreNotes.push_back(n);
        cout << i << "\t |";
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < freqMaxTab.size(); i+=2) {
        if (freqMaxTab.at(i+1) == 20) {
            cout << endl << "La frequence max est : " << freqMaxTab.at(i) << ", atteinte pour la note maximale : 20" << endl;
        } else {
            cout << endl << "La frequence max est : " << freqMaxTab.at(i) << " intervalles [" << freqMaxTab.at(i+1) << ',' << freqMaxTab.at(i+1)+1 << '[' << endl;
        }
    }

    cout << endl;

    for (int i = freqMax; i >= 0; i--) {
        for (int j = 0; j <= 20; j++) {
            if (i != 0) {
                if (j <= 10) {
                    if (nombreNotes.at(j) >= i) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                } else {
                    if (nombreNotes.at(j) >= i) {
                        cout << " * ";
                    } else {
                        cout << "   ";
                    }
                }
            } else {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
