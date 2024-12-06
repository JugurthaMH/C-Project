#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <windows.h>
using namespace std;


class Point
{
    private:
        double x; // Attribut type double pour les abscisses
        double y; // Attribut type double pour les ordonnees
    public:
        Point(double param_x, double param_y); //Constructeur de la classe
        void affiche(double x, double y);                 //affiche la position du Point

        double getX() const;            //Une constante qui va afficher la position x du point
        void setX(double nouveau_x);    //Une fonction qui ne retourne rien qui va mettre à jour la position x du point

        double getY() const;            //Une constante qui va afficher la position y du point
        void setY(double nouveau_Y);    //Une fonction qui ne retourne rien qui va mettre à jour la position y du point
};

#endif // POINT_H
