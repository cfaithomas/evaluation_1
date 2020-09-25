#include <iostream>
#include "Eleve.h"
#include "Classe.h"


int main() {
  Eleve *e1=new Eleve(1,"Jean","Daniel");
  e1->ajouterNote( new Note(12));
  e1->ajouterNote(new Note(10));
  e1->ajouterNote(new Note(4));
  /*************************test de la moyenne par élève***********************************/
  cout<<e1->calculerMoyenne()<<endl;
  e1->retirer(1);
  cout<<e1->calculerMoyenne()<<endl;
  /********************** tests concernant la classe****************************************/
  Eleve *e2=new Eleve(2,"Ernest","Julien");
  e2->ajouterNote(new Note(4));
  e2->ajouterNote(new Note(3));

  Classe c1("CE2");
  c1.ajouterEleve(e1);
  c1.ajouterEleve(e2);

  cout<<c1.moyenneClasse()<<endl;
  c1.retirerEleve(2);
  cout<<c1.moyenneClasse()<<endl;

  Eleve *e3=c1.rechercheparID(1);
  cout<<e3->getID()<<endl;


}
