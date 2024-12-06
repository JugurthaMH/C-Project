#include "etudiant.hpp"

etudiant::etudiant(){ //Constructeur par défaut
    m_matricule=0;
    m_nom="";
    m_nbNotes=0;
    m_tabNotes=new float[m_nbNotes];
}

etudiant::etudiant(unsigned int matricule,string nom, unsigned int nbNotes){
    this->m_matricule=matricule;
    this->m_nom=nom;
    this->m_nbNotes=nbNotes;

    m_tabNotes = new float[nbNotes];
    cout << "Création d'un étudiant N° : " << m_matricule << " avec " << m_nbNotes << " notes" << endl;
}

unsigned int etudiant::getMatricule(){
    return this->m_matricule;
}

string etudiant::getNom(){
    return this->m_nom;
}

unsigned int etudiant::getNbNotes(){
    return this->m_nbNotes;
}

void etudiant::setMatricule(unsigned int matricule){
    m_matricule=matricule;
}

void etudiant::setNom(string nom){
    m_nom=nom;
}

void etudiant::setNbNotes(unsigned int nbNotes){
    m_nbNotes=nbNotes;
}

void etudiant::saisie(){

    for (unsigned int i = 0;i<m_nbNotes; i++){
        cout << "Entrer la note N°" << i+1 << ":";
        cin >> m_tabNotes[i];
    }
}

void etudiant::affichage(){
    cout << "Etudiant N°: " << m_matricule << " Nom: " << m_nom << endl;
    cout << "Nombre de  notes : " << m_nbNotes << endl;

    for (unsigned int i=0;i<m_nbNotes;i++){
        cout << m_tabNotes[i];
        cout << " ";
    }
    cout << endl;
}

float etudiant::moyenne(){
    float moyenne=0;

    for (unsigned int i=0;i<m_nbNotes;i++){
        moyenne+=m_tabNotes[i];
    }
    return moyenne/m_nbNotes;
}

bool etudiant::admis(){
    if (this->moyenne()>=10){
        return true;
    }
    else return false;

}
