#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string.h>
using namespace std;

class Personne
{
     public:
        string profession;
        int age;
        void affiche()
        {
             cout << "Ma profession est: " << profession << endl;
             cout << "Mon age est de " << age << " ans"<<endl;
             etude();
             travaille();
        }
        void travaille() { cout << "Je peux travailler." << endl; }
        void etude() { cout << "J'ai termine ma formation." << endl; }
};
#endif // PERSONNE_H
