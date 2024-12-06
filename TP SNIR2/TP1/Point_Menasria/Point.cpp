#include "Point.hpp"

Point::Point (double param_x, double param_y) //Fonction qui va assigner la position X et Y du point
{
    x=param_x;
    y=param_y;
}

double Point::getX() const                     //Fonction qui va retourner la position X du point
{
    return x;
}

void Point::setX (double nouveau_x)            //Fonction qui va assigner une nouvelle position au point à l'abscisse
{
        this->x=nouveau_x;
}

double Point::getY() const                      //Fonction qui va retourner la position Y du point
{
    return y;
}

void Point::setY(double nouveau_y)              //Fonction qui va assigner une nouvelle position au point à l'ORDONNE
{
        this->y=nouveau_y;
}

void Point::affiche(double x,double y)          //Fonction qui va afficher la position X et Y de l'objet Point.
{
        cout << "\nLe point se trouve sur la position X="<<this->x<<" Y="<<this->y;
}
