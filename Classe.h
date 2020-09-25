//
// Created by eric on 16/09/2020.
//

#ifndef EVALUATION_1_C___CLASSE_H
#define EVALUATION_1_C___CLASSE_H

#include "Eleve.h"

class Classe {
private:
    string nom;
    vector<Eleve*> eleves;
public:
    Classe(const string &nom);
    Eleve* rechercheparID (int id) const;
    float moyenneClasse() const;
    void ajouterEleve (Eleve *eleve) ;
    void retirerEleve (int id) ;
};


#endif //EVALUATION_1_C___CLASSE_H
