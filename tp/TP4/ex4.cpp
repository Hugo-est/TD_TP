#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ << " line " << __LINE__ << ": " #test << endl

struct Poind2D {
    double x;
    double y;
};

struct Segment {
    Poind2D a;
    Poind2D b;
};

double carre(double x) {
    return x*x;
}

double calcule_distance(Poind2D a, Poind2D b) {
    return sqrt(carre(a.x-b.x)+carre(a.y-b.y));
}

double calcule_distance_segment(Segment seg) {
    return calcule_distance(seg.a, seg.b);
}

Poind2D milieu(Segment seg) {
    double x = (seg.a.x+seg.b.x)/2;
    double y = (seg.a.y+seg.b.y)/2;
    Poind2D mid = {x, y};
    return mid;
}

void affiche_point(Poind2D a) {
    cout << "(" << a.x << ";" << a.y << ")" << endl;
}


int main() {
    Poind2D a = {0,2};
    Poind2D b = {5,2};
    Segment seg = {a,b};
    cout << "La longueur du segment est de : " << calcule_distance_segment(seg) << endl;
    cout << "Son milieu est : ";
    affiche_point(milieu(seg));
    return 0;
}
