#include "etudiant.h"
using namespace std;

etudiant::etudiant()
{ //Constructeur par défaut
    m_matricule=0;
    m_nom="";
    m_nbNotes=0;
    m_tabNotes=new float[m_nbNotes];
    m_sexe = 0;
}

etudiant::etudiant(unsigned int matricule,string nom, unsigned int nbNotes,unsigned int sexe)
{
    this->m_matricule=matricule;
    this->m_nom=nom;
    this->m_nbNotes=nbNotes;
    this->m_sexe=sexe;

    m_tabNotes = new float[nbNotes];
    cout << "Creation d'un etudiant N" << m_matricule << " avec " << m_nbNotes << " notes" << endl;
}

unsigned int etudiant::getMatricule()
{
    return this->m_matricule;
}

unsigned int etudiant::getSexe()
{
    return this->m_sexe;
}

string etudiant::getNom()
{
    return this->m_nom;
}

unsigned int etudiant::getNbNotes()
{
    return this->m_nbNotes;
}

void etudiant::setMatricule(unsigned int matricule)
{
    m_matricule=matricule;
}

void etudiant::setNom(string nom)
{
    m_nom=nom;
}

void etudiant::setSexe(unsigned int sexe)
{
    m_sexe=sexe;
}

void etudiant::setNbNotes(unsigned int nbNotes)
{
    m_nbNotes=nbNotes;
}

void etudiant::saisie()
{
    for (unsigned int i = 0;i<m_nbNotes; i++)
    {
        cout << "Entrer la note N" << i+1 << ":";
        cin >> m_tabNotes[i];

        while (m_tabNotes[i] < 0 || m_tabNotes[i] > 20)         // Faire une boucle While qui oblige l'utilisateur à corriger son erreur.
        {
            cout << "Erreur de saisie\nEntrer la note N" << i+1 << ":";
            cin >> m_tabNotes[i];
        }
    }
}

void etudiant::affichage()
{
    cout << "Etudiant N: " << m_matricule << " Nom: " << m_nom << endl;
    cout << "Nombre de  notes : " << m_nbNotes << endl;

    if (m_sexe == 0)
    {
        cout << "Sexe: Homme\n";
    }
    else if (m_sexe == 1)
    {
        cout << "Sexe: Femme\n";
    }
    else
    {
        cout << "Sexe: Indetermine\n";
    }

    for (unsigned int i=0;i<m_nbNotes;i++)
    {
        cout << m_tabNotes[i];
        cout << " ";
    }
    cout << endl;
}

float etudiant::moyenne()
{
    float moyenne=0;

    for (unsigned int i=0;i<m_nbNotes;i++)
    {
        moyenne+=m_tabNotes[i];
    }
    return moyenne/m_nbNotes;
}

bool etudiant::admis()
{
    if (this->moyenne()>=10)
    {
        return true;
    }
    else return false;
}

// Exercice Controle
float etudiant::notePlusForte()
{
    float bestNote;
    bestNote=m_tabNotes[0];
    for (int i=0; i < m_nbNotes; i++)
    {
        if (bestNote < m_tabNotes[i])
        {
            bestNote=m_tabNotes[i];
        }
    }
    cout << "La meilleur note est " << bestNote <<".\n";
    return bestNote;
}

float etudiant::notePlusFaible()
{
    float pireNote;
    pireNote=m_tabNotes[0];
    for (int i=0; i<m_nbNotes; i++)
    {
        if (pireNote > m_tabNotes[i])
        {
            pireNote=m_tabNotes[i];
        }
    }
    cout << "La pire note est " << pireNote <<".\n";
    return pireNote;
}



