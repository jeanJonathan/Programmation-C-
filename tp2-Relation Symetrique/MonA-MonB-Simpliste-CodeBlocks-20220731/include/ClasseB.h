/**
 * @file ClasseB.h
 * @brief spécifie une ClasseB simpliste en relation réciproque avec ClasseA
 Relation réciproque
 * @author Lopistéguy
 * @version 0.1
 * @date jj/mm/aaa
 */
#ifndef CLASSEB_H
#define CLASSEB_H

using namespace std;

#include <iostream>
#include "ClasseA.h"  // utilisée ci-dessous


class ClasseA;  // Annonce une définition ultérieure de ClasseA
                // Permet de faire référence aux membres de ClasseA dans ce code

class ClasseB {
    /// ATTRIBUTS
    public:
        string attributB;  // un attribut de ClassB
        ClasseA* monPoteA; // implémente la relation vers un objet de ClasseA

    /// METHODES ///
    public:
        // Constructeur
        ClasseB(string);
        // Méthode usuelle : toString
        string toString();
};

#endif // CLASSEB_H
