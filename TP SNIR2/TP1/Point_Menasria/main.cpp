#include <iostream>
#include "Point.hpp"

using namespace std;

int main()
{
    double x,y;
    Point p1(1,2);
    Point p2(6,7);
    //p1.setX(5);
    cout << "L'abscisse de P1 est " << p1.getX() << endl;
    cout << "L'abscisse de P2 est " << p2.getX() << endl;
    cout << "L'ordonne de P1 est " << p1.getY() << endl;
    cout << "L'ordonne de P2 est " << p2.getY() << endl;
    p1.affiche(x,y);
    p2.affiche(x,y);
    return 0;
}

