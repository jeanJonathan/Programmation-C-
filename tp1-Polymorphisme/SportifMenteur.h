#ifndef SPORTIFMENTEUR_H
#define SPORTIFMENTEUR_H
#include "Sportif.h"

class SportifMenteur : public Sportif {


public:

    SportifMenteur(string nom, string prenom,unsigned short int annee, string tuteur);

    string toString();

    unsigned short int getAge();

    string getTuteur() { return tuteur; }
    void setTuteur(string leTuteur) { tuteur = leTuteur; }

private:
    string tuteur;
};

#endif // SPORTIFMENTEUR_H
