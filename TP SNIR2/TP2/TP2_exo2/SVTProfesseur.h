#ifndef SVTPROFESSEUR_H
#define SVTPROFESSEUR_H

#include <iostream>
using namespace std;

class SVTProfesseur : public Personne
{
    public:
       void enseignsvt()
        {
        cout << "Je peux enseigner la science et vie de la terre." << endl;
        }
};

#endif // SVTPROFESSEUR_H
