#ifndef VOITURE_H
#define VOITURE_H

#include "Individu.h"

#include <iostream>
using namespace std;

// Mise en relation des deux classe (cle etrangere) Des lors a partir de la classe voiture on peux identifier le pilote d'une voiture
class Individu; // Pour faire reference aux membre de la classe Individu dans la classse Voiture
                // (du coup on peut declarer un attribut de typpe pointeur monPilote(de type individu donc disposant des attributs de la
                // classe individus) comme attribut dans Voiture.h)
class Voiture
{
    public:
        Voiture();
        virtual ~Voiture();
        Voiture(string,string);
        string toString();
        void setIndividu(Individu*);
        Individu* getIndividu();
        string getMatricule();
        void setMatricule(string);
        string getMarque();
        void setMarque(string);

        string toStringAndLink();
        void majMonPilote(Individu*);
        void supprimerLien();

    protected:

    private:
        Individu* monPilote;
        string marque;
        string immatriculation;


};

#endif // VOITURE_H
