/**
 * @file ClasseA.cpp
 * @brief ClasseA::ClasseA, ClasseA::toString
 * @author Lopistéguy
 * @version 0.1
 * @date jj/mm/aaa
 */
#include "ClasseA.h"

ClasseA::ClasseA(string a) {
    this->attributA = a;
    this->monPoteB = nullptr;
}

string ClasseA::toString() {
    string resultat;
    resultat = "je suis (" + attributA + ")";
    if (monPoteB != nullptr) // lié avec un objet B
        resultat += " et je pointe sur (" + monPoteB->attributB + ")";
    return (resultat);
}
