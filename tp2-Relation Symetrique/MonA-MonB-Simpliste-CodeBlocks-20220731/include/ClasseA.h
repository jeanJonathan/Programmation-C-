/**
 * @file ClasseA.h
 * @brief spécifie une ClasseA simpliste en relation réciproque avec ClasseB
 Relation réciproque
 * @author Lopistéguy
 * @version 0.1
 * @date jj/mm/aaa
 */
#ifndef CLASSEA_H
#define CLASSEA_H

using namespace std;

#include <iostream>
#include "ClasseB.h"  // utilisée ci-dessous

class ClasseB;  // Annonce une définition ultérieure de ClasseB
                // Permet de faire référence aux membres de ClasseB dans ce code
class ClasseA {
    /// ATTRIBUTS
    public:
        string attributA;  // un attribut de ClassA
        ClasseB* monPoteB; // implémente la relation vers un objet de ClasseB

    /// METHODES ///
    public:
        // Constructeur
        ClasseA(string);
        // Méthode usuelle : toString
        string toString();
};

#endif // CLASSEA_H
