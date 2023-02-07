#include "Sportif.h"
#include "SportifMenteur.h"
#include "Outils.h"

SportifMenteur::SportifMenteur(string nom, string prenom,unsigned short int annee, string tuteur)
:Sportif(nom,prenom,annee),tuteur(tuteur)
{
}

string SportifMenteur::toString()
{
    return  Sportif :: toString() + " - tuteur :" + getTuteur();
}

unsigned short int SportifMenteur::getAge()
{
    if(Sportif :: getAge() < 18 ){
        return 18 ;
    }
    return Sportif :: getAge();
}
