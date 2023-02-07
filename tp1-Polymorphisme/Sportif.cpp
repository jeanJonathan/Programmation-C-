#include "Outils.h"
#include "Sportif.h"

Sportif::Sportif(string nom, string prenom,unsigned short int annee)
:nom(nom),prenom(prenom),anneeNaissance(annee)
{
}

string Sportif::toString()
{
    return "nom : " + getNom() + "  -  prenom : " + getPrenom();
}

unsigned short int Sportif::getAge()
{

    return Outils :: anneeActuelle()- getAnneeNaissance();

}

