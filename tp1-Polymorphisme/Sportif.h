#ifndef SPORTIF_H
#define SPORTIF_H

#include <string>
#include "Outils.h"

using namespace std;

class Sportif
{
    public:

        Sportif(string nom, string prenom,unsigned short int annee);
        virtual string toString ();

        virtual unsigned short int getAge();

        // ENCAPSULATION
        string getNom() { return nom; }
        void setNom(string name) { nom = name; }

        string getPrenom() { return prenom; }
        void setPrenom(string surname) { prenom = surname; }

        unsigned short int getAnneeNaissance() { return anneeNaissance; }
        void setAnneeNaissance(unsigned short int naissance) { anneeNaissance = naissance; }

    private:
        string nom;
        string prenom;
        unsigned short int anneeNaissance;
};

#endif // SPORTIF_H
