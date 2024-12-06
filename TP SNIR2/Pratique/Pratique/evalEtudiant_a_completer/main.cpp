#include <iostream>
#include "etudiant.hpp"
using namespace std;

int main()
{
    etudiant etudiant1(512,"Peter", 6);
    etudiant1.saisie();
    etudiant1.affichage();
    cout << "La moyenne de " << etudiant1.getNom() << " est de " << etudiant1.moyenne() << endl;

    if (etudiant1.admis())
    {
        cout << etudiant1.getNom() << " est admis !" << endl;
    }
    else
    {
        cout << etudiant1.getNom() << " est recallé..." << endl;
    }

    return 0;
}
