#include <iostream>
#include "Outils.h"
#include "Sportif.h"
#include "SportifMenteur.h"

using namespace std;


void afficheAgeSportifParValeur(Sportif sportif);
//
void afficheAgeSportifParTReference(Sportif &sportif);
//
void afficheAgeSportifParValeur(Sportif* sportif);
//

int main()
{

    //Outils unOutils;
    //cout << unOutils.s_anneeActuelle() << endl<;

    Sportif sportif1("KOFFI","jean jonathan",2009);
    SportifMenteur sportif2("DAV","David",2007,"Mr Christophe");
    SportifMenteur sportif3("DAN","Danniel",2008,"Mme Pantxika");
    /*
    cout << sportif1.getAnneeNaissance() << endl;
    cout << sportif1.getAge() << endl;
    cout << sportif2.getAge() << endl;
    cout << sportif3.getAge() << endl;

    cout << endl;
    cout << endl;
    */
    afficheAgeSportifParTReference(sportif1);
    afficheAgeSportifParTReference(sportif2);
    afficheAgeSportifParTReference(sportif3);

    return 0;
}
void afficheAgeSportifParValeur(Sportif sportif){
    cout << sportif.getAnneeNaissance() << endl;
    cout << sportif.getAge() << endl;
}
/*Ici donc c'est le type de l'objet qui appel la methode
getAnneeNaissanc() et getAge() qui prime*/

void afficheAgeSportifParTReference(Sportif &sportif){
    cout << sportif.getAnneeNaissance() << endl; // Resolution dynamique
    cout << sportif.getAge() << endl; // Resolution dynamique
}
void afficheAgeSportifParValeur(Sportif* sportif){
    cout << sportif->getAnneeNaissance() << endl; // Resolution dynamique
    cout << sportif->getAge() << endl; // Resolution dynamique
}
