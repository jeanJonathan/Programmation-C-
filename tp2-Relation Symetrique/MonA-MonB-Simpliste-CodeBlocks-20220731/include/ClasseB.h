/**
 * @file ClasseB.h
 * @brief sp�cifie une ClasseB simpliste en relation r�ciproque avec ClasseA
 Relation r�ciproque
 * @author Lopist�guy
 * @version 0.1
 * @date jj/mm/aaa
 */
#ifndef CLASSEB_H
#define CLASSEB_H

using namespace std;

#include <iostream>
#include "ClasseA.h"  // utilis�e ci-dessous


class ClasseA;  // Annonce une d�finition ult�rieure de ClasseA
                // Permet de faire r�f�rence aux membres de ClasseA dans ce code

class ClasseB {
    /// ATTRIBUTS
    public:
        string attributB;  // un attribut de ClassB
        ClasseA* monPoteA; // impl�mente la relation vers un objet de ClasseA

    /// METHODES ///
    public:
        // Constructeur
        ClasseB(string);
        // M�thode usuelle : toString
        string toString();
};

#endif // CLASSEB_H
