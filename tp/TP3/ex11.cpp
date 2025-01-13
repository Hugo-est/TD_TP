#include <iostream>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

bool est_bissextiles(int annee) {
    if (annee % 400 == 0) {
        return true;
    } else if (annee % 4 == 0 & annee % 100 != 0) {
        return true;
    } else {
        return false;
    }
}

bool date_valide(int jours, int mois, int annee) {
    if (mois > 0 & mois <= 12) {
        if ((mois % 2 == 1 & mois <=6) | (mois % 2 == 0 & mois > 6)) {
            if (jours <= 31) {
                return true;
            } else {
                return false;
            }
        } else if (mois == 2) {
            if (est_bissextiles(annee)) {
                if (jours <= 29) {
                    return true;
                } else {
                    return false;
                }
            } else {    
                if (jours <= 28) {
                    return true;
                } else {
                    return false;
                }
            }
        } else {
            if (jours <= 30) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        return false;
    }
}

void jour_suivant(int& jours, int& mois, int& annee) {
    if (date_valide(jours+1, mois, annee)) {
        jours += 1;
    } else if (mois+1 <= 12) {
        jours = 1;
        mois += 1;
    } else {
        jours = 1;
        mois = 1;
        annee += 1;
    }
}

string jour_semaine(int jours, int mois, int annee) {
    int jours_totale = 0;

    if (est_bissextiles(annee) & mois > 2) {
        jours_totale += 1;
    }

    for (int i = 1901; i < annee; i++) {
        if (est_bissextiles(i)) {
            jours_totale += 366;
        } else {
            jours_totale += 365;
        }
    }

    switch (mois) {
        case 2:
            jours_totale += 31;
            break;

        case 3:
            jours_totale += 59;
            break;
        
        case 4:
            jours_totale += 90;
            break;
        
        case 5:
            jours_totale += 120;
            break;

        case 6:
            jours_totale += 151;
            break;
        
        case 7:
            jours_totale += 181;
            break;
        
        case 8:
            jours_totale += 212;
            break;

        case 9:
            jours_totale += 243;
            break;

        case 10:
            jours_totale += 273;
            break;
        
        case 11: 
            jours_totale += 304;
            break;
        
        case 12:
            jours_totale += 334;
            break;

        default:
            break;
    }

    jours_totale += jours-1;
    
    if (jours_totale % 7 == 0) {
        return "Mardi";
    } else if (jours_totale % 7 == 1) {
        return "Mercredi";
    } else if (jours_totale % 7 == 2) {
        return "Jeudi";
    } else if (jours_totale % 7 == 3) {
        return "Vendredi";
    } else if (jours_totale % 7 == 4) {
        return "Samedi";
    } else if (jours_totale % 7 == 5) {
        return "Dimanche";
    } else if (jours_totale % 7 == 6) {
        return "Lundi";
    }
}

void test() {
    ASSERT(date_valide(28, 2, 2015) == true);
    ASSERT(date_valide(29, 2, 2015) == false);
    ASSERT(date_valide(29, 2, 2012) == true);
    ASSERT(date_valide(31, 1, 2015) == true);
    ASSERT(date_valide(31, 8, 2015) == true);

    ASSERT(est_bissextiles(2015) == false);
    ASSERT(est_bissextiles(2012) == true);
    ASSERT(est_bissextiles(2000) == true);
    ASSERT(est_bissextiles(1900) == false);
    
    ASSERT(jour_semaine(17, 11, 2024) == "Dimanche");
}

int main()
{
    test();
    int compteur = 0;
    for (int i = 1901; i <= 2000; i++) {
        for (int j = 1; j <= 12; j++) {
            if (jour_semaine(1, j, i) == "Dimanche") {
                compteur += 1;
            }
        }
    }
    cout << "Il y a eu " << compteur << " 1er du mois qui sont tomber un dimanche au XX e siecle." << endl;

    return 0;
}
