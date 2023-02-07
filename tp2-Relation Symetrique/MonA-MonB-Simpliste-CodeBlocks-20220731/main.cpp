/**
 * @file main.cpp
 * @brief M3105    Relation Symétrique   (ClasseA <-> ClasseB)
   Exemple de mise en oeuvre SIMPLISTE d'une rélation symétrique
 * @author Lopistéguy
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

    /** implémentation simpliste de la relation bilatérale **/
    /// le mieux (cf. TD2) est de gérer cette symétrie avec des méthodes avancées
    /// qui veillent aux éventuelles réciprocités existantes pour unA et pour unB,
    /// avant de les associer, et qui réalisent si nécessaire des mises à jour préalables
    unA.monPoteB = &unB; //    l'objet unA pointe vers l'objet unB
    unB.monPoteA = &unA; // et l'objet unB pointe vers l'objet unA

    cout << unA.toString() << endl; // affiche : je suis (unA) et je pointe sur (unB)
    cout << unB.toString() << endl; // affiche : je suis (unB) et je pointe sur (unA)
    return 0;
}
