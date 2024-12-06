#ifndef MUSIQUEPROF_H
#define MUSIQUEPROF_H

#include <iostream>
using namespace std;

class MusiqueProfesseur : public Personne
{
    public:
       void enseignmusique()
        {
        cout << "Je peux enseigner la musique." << endl;
        }
};

#endif // MUSIQUEPROF_H
