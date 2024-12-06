#include "Carre.hpp"
#include <iostream>

using namespace std;

int Carre::perimetre(int cote)
{
    return Carre::cote*4;
}

int Carre::surface (int cote)
{
    return Carre::cote*Carre::cote;
}

void Carre::saisie()
{
    int x;
    cin >> x;
    Carre:: cote=x;
}
