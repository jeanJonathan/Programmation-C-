#ifndef INDIVIDU_H
#define INDIVIDU_H
#include "Voiture.h"
#include <iostream>
using namespace std;

class Voiture; // Pour faire reference aux membre de la classe Voiture dans la classse Individus. Ainsi les objets de Individus
               //connaissent les objets de Voitures
class Individu
{
    public:
        Individu();
        virtual ~Individu();
        Individu(string,string);
        string toString();
        void setVoiture(Voiture*);
        Voiture* getVoiture();
        string getPrenom();
        void setPrenom(string);
        string getNom();
        void setNom(string);

        string toStringAndLink();
        void majVoiture(Voiture*);
        void supprimerLien();
    protected:

    private:
        Voiture* maVoiture;
        string nom;
        string prenom;
};

#endif // INDIVIDU_H
