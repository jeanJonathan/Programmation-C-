/**
 * @file Individu.h
 * @brief sp�cifie une Individu en relation r�ciproque avec Voiture
 Relation r�ciproque
 * @author Lopist�guy
 * @version 0.1
 * @date jj/mm/aaa
 */
#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include <iostream>
#include "Voiture.h" // Utilis�e ci-dessous

class Voiture; // Annonce une d�finition ult�rieure de Voiture
               // permet de faire r�f�rence aux membres de Voiture dans ce code

class Individu {
    /// ATTRIBUTS
    public:
        string nom, prenom;
/**        Voiture  vehicule;  /** ATTRIBUT UTILISE POUR UN LIEN - MAUVAIS CHOIX ! **/
        Voiture* maVoiture; // Impl�mente un bon lien

    /// METHODES
    public:
        // Constructeur
        Individu (string="", string="");
        // destructeur
        ~Individu();

        // M�thodes usuelles : toString
        string toString();
        string toStringAndLink();

        // M�thodes sp�cifiques
        void majMaVoiture (Voiture*);
        void setMaVoiture(Voiture*);
        void supprimerLien();
};

#endif // INDIVIDU_H
