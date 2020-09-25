//
// Created by eric on 16/09/2020.
//

#include "Classe.h"

Classe::Classe(const string &nom):nom(nom) {
}

Eleve *Classe::rechercheparID(int id) const {

    for(Eleve *e:eleves)
    {
        if(e->getID()==id)
        {
            return e;
        }
    }
    return nullptr;
}

float Classe::moyenneClasse() const{
    float moyenneclasse=0;

    for(Eleve *e:eleves)
    {
        for(Note *n:e->getListnotes())
        {
            moyenneclasse+=n->getNote();
        }
    }
    return moyenneclasse/eleves.size();
}

void Classe::ajouterEleve(Eleve *eleve)   {
eleves.push_back(eleve);
}

void Classe::retirerEleve(int id) {
int rang=0;
for(int i=0;i<eleves.size();i++)
{
    if(eleves[i]->getID()==id)
    {
        eleves.erase(eleves.begin()+i);
        break;
    }
}
}
