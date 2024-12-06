#include <iostream>
#include "etudiant.h"
#include <stdlib.h>
using namespace std;

int main()
{
    system("cls");
    etudiant etudiant1(512,"Peter", 6,0);
    etudiant1.saisie();
    int choix=0;
    do
    {
        cout << "Tapez:\n1. Pour afficher les informations de l'etudiant\n2. Pour afficher la moyenne de l'etudiant\n3. Pour afficher la note la plus forte de l'etudiant\n4. Pour afficher la note la plus faible de l'etudiant\n5. Pour verifier si l'etudiant est admis ou recale\n6. Pour quitter le programme\n";
        cin >> choix;
        while (choix < 0 || choix > 6)
        {
            cout << "Erreur de saisie !\nTapez:\n1. Pour afficher les informations de l'etudiant\n2. Pour afficher la moyenne de l'etudiant\n3. Pour afficher la note la plus forte de l'etudiant\n4. Pour afficher la note la plus faible de l'etudiant\n5. Pour verifier si l'etudiant est admis ou recale\n6. Pour quitter le programme\n";
            cin >> choix;
        }

        switch (choix)
        {
            case 1:
            etudiant1.affichage();
            break;

            case 2:
            cout << "La moyenne de " << etudiant1.getNom() << " est de " << etudiant1.moyenne() << endl;
            break;

            case 3:
            etudiant1.notePlusForte();  // Renvoie la note la plus forte
            break;

            case 4:
            etudiant1.notePlusFaible(); // Renvoie la note la plus faible
            break;

            case 5:
            if (etudiant1.admis())
            {
                cout << etudiant1.getNom() << " est admis !" << endl;
            }
            else
            {
                cout << etudiant1.getNom() << " est recalle ..." << endl;
            }
            break;
        }
    }
    while(choix != 6);

    /*etudiant1.saisie();
    etudiant1.affichage();
    cout << "La moyenne de " << etudiant1.getNom() << " est de " << etudiant1.moyenne() << endl;
    etudiant1.notePlusForte();  // Renvoie la note la plus forte
    etudiant1.notePlusFaible(); // Renvoie la note la plus faible

    if (etudiant1.admis())
    {
        cout << etudiant1.getNom() << " est admis !" << endl;
    }
    else
    {
        cout << etudiant1.getNom() << " est recalle ..." << endl;
    }*/

    return 0;
}
