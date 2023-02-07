#include "Voiture.h"

Voiture::Voiture()
{
    //ctor
}

Voiture::~Voiture()
{
    //dtor
}
Voiture :: Voiture(string laMarque,string immatricul)
    :marque(laMarque),immatriculation(immatricul){

}
string Voiture :: toString(){
    return "la marque est : "+getMarque()+" et la plaque d'immatriculation est : "+getMatricule();
}
void Voiture :: setIndividu(Individu* individu){
    this->monPilote=individu; // this->getIndividu() = individu; :(
}
Individu* Voiture:: getIndividu(){
    return monPilote;
}
string Voiture :: getMatricule(){
    return immatriculation;
}
void Voiture :: setMatricule(string mat){
    immatriculation=mat;
}
string Voiture :: getMarque(){
    return marque;
}
void Voiture :: setMarque(string laMarque){
    marque = laMarque;
}
string Voiture :: toStringAndLink(){
    if(getIndividu()!=nullptr){ // Si l'attribut objet n'alloue rien en memoire (nullptr) alors
        return toString()+" et son nom est : "+getIndividu()->getNom()+" et son prenom est : "+getIndividu()->getPrenom();
    }
    return Voiture :: toString();
}
void Voiture :: majMonPilote(Individu* newPilote){
    setIndividu(newPilote);
}
void Voiture :: supprimerLien(){
    if(getIndividu()!=nullptr){
        setIndividu(nullptr); // ou  getIndividu->majMonPilote(nullptr)
    }
}

