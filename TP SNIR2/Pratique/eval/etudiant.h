#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP
#include <string>
#include <iostream>
using namespace std;

class etudiant
{
public:
    etudiant();
    etudiant(unsigned int,string, unsigned int,unsigned int);

    unsigned int getMatricule();
    string getNom();
    unsigned int getNbNotes();
    unsigned int getSexe();

    void setMatricule(unsigned int);
    void setNom(string);
    void setNbNotes(unsigned int);
    void setSexe(unsigned int);

    void saisie();
    void affichage();
    float moyenne();
    bool admis();

// Exercice 1 Contrôle
    float notePlusForte();
    float notePlusFaible();



private:

    unsigned int m_matricule;
    string m_nom;
    unsigned int m_nbNotes;
    float *m_tabNotes;
    int m_sexe;

};

#endif // ETUDIANT_HPP
