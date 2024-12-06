#include <iostream>
#include "Carre.hpp"

using namespace std;

int main()
{
    int c1;
    Carre carre1;
    cout << "********Calcul proprietes d'un carre*********" << endl;
    cout << "Entrez la valeur du cote en m:";
    carre1.saisie();
    cout << "Perimetre du carre : ";
    cout << carre1.perimetre(c1)<<" m" <<endl;
    cout << "Surface du carre : ";
    cout << carre1.surface(c1)<<" m2" <<endl;

    return 0;
}
