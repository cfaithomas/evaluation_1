//
// Created by eric on 16/09/2020.
//

#include "Eleve.h"

Eleve::Eleve(int id,const string& prenom,const string& nom):id(id),prenom(prenom),nom(nom) {

}

float Eleve::calculerMoyenne() {
    float somme=0;
    for(Note *n:listnotes)
    {
        somme+=n->getNote();
    }
    return somme/listnotes.size();
}

const string& Eleve::getNom() const {
    return nom;
}

int Eleve::getID() const {
    return id;
}

void Eleve::ajouterNote(Note *note) {
listnotes.push_back(note);
}

void Eleve::retirer(int rang) {
listnotes.erase(listnotes.begin()+rang);
}

const vector<Note *> &Eleve::getListnotes() const {
    return listnotes;
}
