#include <iostream>
using namespace std;

int main()
{
    // Entier 16 bits
    short int val1_16 = 32767;
    short int val2_16 = 1;
    short int somme_16, difference_16;

    // Entier 32 bits
    int val1_32 = 2147483647;
    int val2_32 = 1;
    int somme_32, difference_32;

    // CALCUL AVEC DES ENTIERS 16 BITS signes
    cout << "**************** CALCUL AVEC DES ENTIERS 16 BITS : short int  **************************" << endl<< endl;
    // Calcul somme val1_16 + val2_16
    somme_16 = val1_16 + val2_16;
    cout  << "La valeur de " << val1_16 << " + " << val2_16 << " = " << somme_16 << "\tOn aurait du trouver : +32768" << endl;

    // Calcul difference  val1 - val2
    val1_16 = -32768;
    difference_16 = val1_16 - val2_16 ;
    cout  << "La valeur de " << val1_16 << " - " << val2_16 << " = " << difference_16 << "\tOn aurait du trouver : -32769" << endl;



    // CALCUL AVEC DES ENTIERS 32 BITS signes
    cout << endl << endl << "**************** CALCUL AVEC DES ENTIERS 32 BITS : int  **************************" << endl<< endl;
    // Calcul somme val1_32 + val2_32*/
    somme_32 = val1_32 + val2_32;
    cout  << "La valeur de " << val1_32 << " + " << val2_32 << " = " << somme_32 << "\tOn aurait du trouver : +2147483648" << endl;

    // Calcul difference  val1 - val2
    val1_32 = -2147483648;
    difference_32 = val1_32 - val2_32 ;
    cout  << "La valeur de " << val1_32 << " - " << val2_32 << " = " << difference_32 << "\tOn aurait du trouver : -2147483649" << endl;

    return 0;
}
