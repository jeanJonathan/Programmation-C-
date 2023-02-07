/**
 * @file ClasseB.cpp
 * @brief ClasseB::ClasseB, ClasseB::toString
 * @author Lopistéguy
 * @version 0.1
 * @date jj/mm/aaa
 */
#include "ClasseB.h"

ClasseB::ClasseB(string b) {
    this->attributB = b;
    this->monPoteA = nullptr;
}

string ClasseB::toString() {
    string resultat;
    resultat = "je suis (" + attributB + ")";
    if (monPoteA != nullptr) // lié avec un objet A
        resultat += " et je pointe sur (" + monPoteA->attributA + ")";
    return (resultat);
}
