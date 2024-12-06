#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include <string.h>
using namespace std;

class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();
        void SetUpJoueur(string NomJoueur, string PosteJoueur, int NumeroJoueur);
        void getNom(string NomJoueur);
        void getPoste(string PosteJoueur);
        void getNumero(int NumeroJoueur);

    private:
        string NomJoueur;
        string PosteJoueur;
        int NumeroJoueur;
};
#endif // JOUEUR_H
