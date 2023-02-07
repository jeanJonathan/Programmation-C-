#include <iostream>
#include <map>
#include <algorithm>
#include <list>
using namespace std;

typedef string Libelle;
typedef string Reference;
typedef int Prix;
typedef int Poids;

Reference referenceCherchee; // Variable globale pour rechercher un element
/*Donc ici l'element chercher doit etre de type string par exemple le libelle d'un produit x */
/*Rmq : Dans un map comme la cle est unique, a partir de la cle on
retrouve la valeur */

void exempleDeFind();
void exempleFindIf();
void exempleForEachEtPartition();
int main()
{
    //cout << "Hello world!" << endl;

    cout << "B-I-E-N-V-E-N-U-E M-O-N-S-I-E-U-R   L-O-P-I-S-T-E-G-U-Y  D-A-N-S   L-E     T-P-3" << endl;
    cout << "Choisissez une option s'il vous plait" << endl << endl;
    while(true){
        char choix;
        cout << endl;
        cout << "'A' excecuter la procedure exempleDeFind()" << endl << endl;
        cout << "'B' excecuter la procedure exempleFindIf()" << endl << endl;
        cout << "'C' excecuter la procedure exempleForEachEtPartition()" << endl << endl;
        cin >> choix ;
        switch(choix){
            case 'A' : exempleDeFind(); break;
            case 'B' : exempleFindIf(); break;
            case 'C' : exempleForEachEtPartition(); break;
        }
        }

    return 0;
}

void exempleDeFind(){
    typedef pair<Libelle,Prix> laPaire;
    typedef map<string,laPaire> MapDeProduits;
    laPaire paire1("Pyjama",1000);
    laPaire paire2("Pull",1500);
    laPaire paire3("Costume",2000);

    MapDeProduits unMapDeProduits;
    unMapDeProduits.insert(MapDeProduits :: value_type("clePyjama",paire1));
    unMapDeProduits.insert(MapDeProduits :: value_type("clePull",paire2));
    unMapDeProduits.insert(MapDeProduits :: value_type("cleCostume",paire3));

    MapDeProduits :: iterator existe;
    existe=unMapDeProduits.find("clePyjama");
    Reference referenceCherchee="clePyjama";

    // Si la recherche arrive la end [begin,end[
    if(existe==unMapDeProduits.end()){ // if(unMapDeProduits.find("clePyjama")==unMapDeProduits.end())
        cout << referenceCherchee +" n'existe pas" <<endl;
        existe++;
    }
    //Sinon alors la reference a ete trouver dans l'intervalle [[begin,end[ car il ne peut pas s'arreter avant que si il arrive au end
    else{
        //Affiche le libelle et le prix
        cout << existe->second.first << " "<<existe->second.second << endl;
    }
}
// Fonction generique find_if dans #include <algorithm>
class Produits{
protected :
    Reference lareference;
    Libelle libelle;
    Prix prix;
public:
    Reference getReference(){return lareference;}
    Libelle getLibelle(){return libelle;}
    Prix getPrix(){return prix;}


    Produits(Reference uneReference,Libelle unLibelle,Prix unPrix):
        lareference(uneReference),libelle(unLibelle),prix(unPrix){}
    string toString(){return " La reference est "+getReference()+" le libelle est "+getLibelle()+" et le prix est "+to_string(getPrix());}

};
//Declaration du predicat
bool memeReference(Produits unProduit){
        return unProduit.getReference()==referenceCherchee;
}
void exempleFindIf(){
    //Les deux premiere syntaxe doivent toujours se suivres
    typedef list<Produits> ListeDeProduits; // On ne dois pas faire directement typedef list<Produits> uneListeDeProduits et l'alimenter
    ListeDeProduits uneListeDeProduits;
    Produits produit1("clePyjama","Pyjama",1200);
    Produits produit2("clePull","Pull",1000);
    Produits produit3("cleCostume","Costume",700);
    uneListeDeProduits.push_back(ListeDeProduits :: value_type(produit1));
    uneListeDeProduits.push_back(ListeDeProduits :: value_type(produit2));
    uneListeDeProduits.push_back(ListeDeProduits :: value_type(produit3));

    ListeDeProduits :: iterator existe;
    referenceCherchee="clePull";
    existe=find_if(uneListeDeProduits.begin(),uneListeDeProduits.end(),memeReference);
    //Remarque memereference ne dois pas s'utiliser avec ses paramtre comme dans la def de find_if

    if(existe==uneListeDeProduits.end()){
        cout << referenceCherchee+"n'existe pas " << endl;
    }
    else{
        cout << existe->getReference() << endl;
    }

    referenceCherchee="cleblablabla";
    existe=find_if(uneListeDeProduits.begin(),uneListeDeProduits.end(),memeReference);

    if(existe==uneListeDeProduits.end()){
        cout << referenceCherchee+" n'existe pas "<< endl;
    }
    else{
        cout << existe->getReference() << endl;
    }
}
//FONCTION GENERIQUES for_each et partition
class Piece : public Produits{
private:
    Poids poids;
public:
    Poids getPoids(){return poids;}
    Piece(Reference uneReference,Libelle unLibelle,Prix unPrix,Poids unPoids):
        Produits(uneReference,unLibelle,unPrix),poids(unPoids){}
    string toString(){return Produits :: toString()+" et le poids est "+to_string(getPoids())+"\n";}

    /*
    void surPoids(Piece* unePiece){
        if(unePiece->getPoids() > 80){
            unePiece->getPrix() *= 1.1;
        }
    }
    */

};
void afficher(Piece* unePiece){
        cout << unePiece->toString() ;
    }
bool tropCestTrop(Piece* unePiece){
        return unePiece->getPrix() > 100;
    }
void exempleForEachEtPartition(){
    Piece piece1("clePyjama","Pyjama",1000,2);
    Piece piece2("clePantalon","Pantalon",1200,85);
    Piece piece3("clePull","Pull",1500,20);
    Piece piece4("cleCostume","Costume",3000,100);

    typedef list<Piece*> ListeDePieces;
    ListeDePieces uneListeDePieces;

    uneListeDePieces.push_back(ListeDePieces :: value_type(&piece1));
    uneListeDePieces.push_back(ListeDePieces :: value_type(&piece2));
    uneListeDePieces.push_back(ListeDePieces :: value_type(&piece3));
    uneListeDePieces.push_back(ListeDePieces :: value_type(&piece4));

    for_each(uneListeDePieces.begin(),uneListeDePieces.end(),afficher);
    cout << endl;
    //for_each(uneListeDePieces.begin(),uneListeDePieces.end(),surPoids);
    cout << endl;
    for_each(uneListeDePieces.begin(),uneListeDePieces.end(),tropCestTrop);

}
