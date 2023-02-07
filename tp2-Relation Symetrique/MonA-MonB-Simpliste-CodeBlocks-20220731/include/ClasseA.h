/**
 * @file ClasseA.h
 * @brief sp�cifie une ClasseA simpliste en relation r�ciproque avec ClasseB
 Relation r�ciproque
 * @author Lopist�guy
 * @version 0.1
 * @date jj/mm/aaa
 */
#ifndef CLASSEA_H
#define CLASSEA_H

using namespace std;

#include <iostream>
#include "ClasseB.h"  // utilis�e ci-dessous

class ClasseB;  // Annonce une d�finition ult�rieure de ClasseB
                // Permet de faire r�f�rence aux membres de ClasseB dans ce code
class ClasseA {
    /// ATTRIBUTS
    public:
        string attributA;  // un attribut de ClassA
        ClasseB* monPoteB; // impl�mente la relation vers un objet de ClasseB

    /// METHODES ///
    public:
        // Constructeur
        ClasseA(string);
        // M�thode usuelle : toString
        string toString();
};

#endif // CLASSEA_H
