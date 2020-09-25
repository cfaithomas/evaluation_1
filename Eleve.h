//
// Created by eric on 16/09/2020.
//

#ifndef EVALUATION_1_C___ELEVE_H
#define EVALUATION_1_C___ELEVE_H

#include <string>
#include "Note.h"
#include <vector>

using namespace std;
class Eleve {
private:
    int id;
    string prenom;
    string nom;
    vector<Note*> listnotes;
public:
    Eleve(int id,const string& prenom, const string& nom);
    float calculerMoyenne();
    const string& getNom() const;
    int getID() const;
    void ajouterNote(Note* note);
    void retirer(int rang);

    const vector<Note *> &getListnotes() const;
};


#endif //EVALUATION_1_C___ELEVE_H
