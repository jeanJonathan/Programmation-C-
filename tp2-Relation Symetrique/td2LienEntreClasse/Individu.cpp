#include "Individu.h"
#include "Voiture.h"

Individu::Individu()
{
    //ctor
}
Individu::~Individu()
{
    //dtor
}
Individu :: Individu(string name,string surname)
    :nom(name),prenom(surname)
{
}
string Individu :: toString(){
    return " Son nom est : "+getNom()+" et son prenom est :"+getPrenom();
}
void Individu :: setVoiture(Voiture* voiture){
    this->maVoiture=voiture;
}
Voiture* Individu :: getVoiture(){
    return maVoiture;
}
string Individu :: getPrenom(){
    return prenom;
}
void Individu :: setPrenom(string surname){
    prenom = surname;
}
string Individu :: getNom(){
    return nom;
}
void Individu :: setNom(string name){
    nom = name;
}
string Individu :: toStringAndLink(){
    if(getVoiture()!=nullptr){
        return toString()+" La marque est : "+getVoiture()->getMarque()+" et le numero de l'immatriculation est "+getVoiture()->getMatricule();
    }
    return Individu :: toString();
}
// Meme fonctionnement que le setVoiture mais ici on precise un nouveau objet voiture; Donc on utilise cette methode si on avait deja appele un setVoiture
void Individu :: majVoiture(Voiture*newVoiture){
    setVoiture(newVoiture);
}
void Individu :: supprimerLien(){
    if(getVoiture()!=nullptr){
        setVoiture(nullptr);
    }
}
