#include <iostream>
#include "Voiture.h"
#include "Individu.h"


using namespace std;

int main()
{
     /*Question 1-b*/
     Voiture voit1("RenaultClio","123AB64");
     Individu ind1("Dupond","Pierre");
     Voiture voit2("Peugeot106","678CD96");
     Voiture voit3("RenaultClio","456EF75");

     Individu ind2("Martin","Louis");
     Individu ind3("Durand","Marcel");
     /*Question 1-c*/
     /*
     cout << voit1.toString() << endl;
     cout << voit20.toString() << endl;
     cout << voit3.toString() << endl;
     cout << endl;
     cout << ind1.toString() << endl;
     cout << ind2.toString() << endl;
     cout << ind3.toString() << endl;
     */

     //ind3.maVoiture(voit3); // D'ou obligation de creer des setters et Getters
     // C'est aussi la reponse a la question 4-d
     ind3.setVoiture(&voit3); // ind3.maVoiture=&voit3
     voit3.setIndividu(&ind3);

     cout << ind3.getVoiture()->toString();
     cout << endl;

     /*Question 2-c*/
     cout << ind3.getVoiture()->getMatricule();
     voit3.setMatricule("77777NO22");
     cout << endl;
     /*2-c La plaque d'immatriculation a bien changer*/
     cout << ind3.getVoiture()->getMatricule();

     cout << endl;
     cout << endl;
     /*3-c*/
     cout << ind3.toStringAndLink();
     cout << endl;
     cout << ind2.toStringAndLink();
     cout << voit3.toStringAndLink();

     // Quesion 5-b
     cout << endl;
     cout << endl;
     delete(&voit3);
     cout << ind3.toStringAndLink();

    return 0;
}
