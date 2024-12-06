#include <iostream>
//#include <windows.h>
#include "Rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect1;
    double x, y;
    cout << "Quelle longueur en metre ? ";
    cin >> x;
    rect1.getLongueur(x);

    cout << "Quelle largeur en metre ? ";
    cin >> y;
    rect1.getLargeur(y);

    //Affichage des valeurs
    //system("cls");
    rect1.setLongueur(x);
    rect1.setLargeur(y);
    rect1.surface(x,y);

    return 0;
}
