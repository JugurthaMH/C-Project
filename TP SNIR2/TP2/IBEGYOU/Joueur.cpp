#include "Joueur.hpp"

Joueur::Joueur()
{

}

Joueur::~Joueur()
{
    //dtor
}

void SetUpJoueur(string NomJoueur, string PosteJoueur, int NumeroJoueur)
{
    cout <<"Nom d'un joueur: ";
    cin >> NomJoueur;

    cout <<"Numero d'un joueur:";
    cin >> NumeroJoueur;

    cout << "Poste d'un joueur";
    cin >> PosteJoueur;
}

void Joueur::getNom(string NomJoueur)
{
    cout <<"Nom d'un joueur: " << NomJoueur;
}

void Joueur::getNumero(int NumeroJoueur)
{
    cout <<"Numero d'un joueur:" << NumeroJoueur;
}

void Joueur::getPoste(string PosteJoueur)
{
    cout <<"Poste d'un joueur:" << PosteJoueur;
}
