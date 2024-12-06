#ifndef MATHSPROFESSEUR_H
#define MATHSPROFESSEUR_H
#include <iostream>
using namespace std;

class MathsProfesseur : public Personne
{
    public:
       void enseignmaths()
        {
        cout << "Je peux enseigner les maths." << endl;
        }
};

#endif // MATHSPROFESSEUR_H
