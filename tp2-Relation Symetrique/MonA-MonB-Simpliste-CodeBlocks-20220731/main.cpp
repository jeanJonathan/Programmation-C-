/**
 * @file main.cpp
 * @brief M3105    Relation Sym�trique   (ClasseA <-> ClasseB)
   Exemple de mise en oeuvre SIMPLISTE d'une r�lation sym�trique
 * @author Lopist�guy
 * @version 0.1
 * @date jj/mm/aaa
 */
#include <iostream>
#include "ClasseA.h"
#include "ClasseB.h"

using namespace std;

/// PROCEDURE PRINCIPALE ///
int main() {
    ClasseA unA("unA");
    ClasseB unB("unB");

    /** impl�mentation simpliste de la relation bilat�rale **/
    /// le mieux (cf. TD2) est de g�rer cette sym�trie avec des m�thodes avanc�es
    /// qui veillent aux �ventuelles r�ciprocit�s existantes pour unA et pour unB,
    /// avant de les associer, et qui r�alisent si n�cessaire des mises � jour pr�alables
    unA.monPoteB = &unB; //    l'objet unA pointe vers l'objet unB
    unB.monPoteA = &unA; // et l'objet unB pointe vers l'objet unA

    cout << unA.toString() << endl; // affiche : je suis (unA) et je pointe sur (unB)
    cout << unB.toString() << endl; // affiche : je suis (unB) et je pointe sur (unA)
    return 0;
}
