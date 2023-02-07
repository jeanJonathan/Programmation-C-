#include <iostream>
#include <list>
#include <map>
#include <set>

using namespace std;

void listeSimple();
void listePaires();
void leMap();
void leSet();
void leMultiSet();
int main()
{
    //cout << "Hello world!" << endl;

    cout << "B-I-E-N-V-E-N-U-E M-O-N-S-I-E-U-R   L-O-P-I-S-T-E-G-U-Y  D-A-N-S   L-E     T-P-3" << endl;
    cout << "Choisissez une option s'il vous plait" << endl << endl;
    while(true){
        char choix;
        cout << endl;
        cout << "'A' excecuter la procedure listeSimple()" << endl << endl;
        cout << "'B' excecuter la procedure listePair()" << endl << endl;
        cout << "'C' excecuter la procedure leMap()" << endl << endl;
        cout << "'D' excecuter la procedure leSet()" << endl << endl;
        cout << "'E' excecuter la procedure leMultiSet()" << endl << endl;
        cin >> choix ;
        switch(choix){
            case 'A' : listeSimple(); break;
            case 'B' : listePaires(); break;
            case 'C' : leMap(); break;
            case 'D' : leSet(); break;
            case 'E' : leMultiSet(); break;
        }
        }
    return 0;
}
void leSet(){
    //Prepa Examen
    typedef set<string> LeSet;
    LeSet unSet;

    unSet.insert(LeSet :: key_type("ABCD")); // ou value_type

    typedef LeSet :: iterator Iterateur;
    pair<Iterateur,bool> testeInsertion;
    testeInsertion=unSet.insert(LeSet :: key_type("ABCD"));
    if(testeInsertion.second==true){
        cout << "Bonne insertion !" << endl;
    }
    else{
        cout << "Mauvaise insertion " << endl;
    }
    Iterateur unIterateur;
    unIterateur=unSet.begin();
    while(unIterateur!=unSet.end()){
        cout << *unIterateur<<endl;
        unIterateur++;
    }
    cout << unSet.count(LeSet :: key_type("ABCD")) << endl;
}
void leMultiSet(){
    typedef multiset<string> MultiSetDeString;
    MultiSetDeString unMultiSetDeString;

    unMultiSetDeString.insert(MultiSetDeString::value_type("aaa"));
    unMultiSetDeString.insert(MultiSetDeString::value_type("bbb"));
    unMultiSetDeString.insert(MultiSetDeString::value_type("eee"));
    unMultiSetDeString.insert(MultiSetDeString::value_type("bbb"));
    unMultiSetDeString.insert(MultiSetDeString::value_type("bbb"));
    unMultiSetDeString.insert(MultiSetDeString::value_type("ccc"));
    unMultiSetDeString.insert(MultiSetDeString::value_type("ddd"));
    unMultiSetDeString.insert(MultiSetDeString::value_type("eee"));

    MultiSetDeString :: iterator unIterateur=unMultiSetDeString.begin();
    while(unIterateur!=unMultiSetDeString.end()){
        cout << *unIterateur << endl;
        unIterateur++;
    }
    //Affiche le nombre d'element conenue dans le multiset
    cout << unMultiSetDeString.count(MultiSetDeString::value_type("bbb")) << endl;

    cout << "Le multSet est maintenant ranger" << endl;
    //Ranger les elements du set en ordre
    /*Pour cela on initialise avec une paire de valeur*/
    typedef pair<MultiSetDeString::iterator,MultiSetDeString::iterator> pairRange;
    pairRange resultatRange = unMultiSetDeString.equal_range(MultiSetDeString::value_type("bbb"));

    //Test
    MultiSetDeString :: iterator unAutreIterateur=unMultiSetDeString.begin();
    while(unAutreIterateur!=unMultiSetDeString.end()){
        cout << *unAutreIterateur << endl;
        unAutreIterateur++;
    }
    cout << endl;

    //Supprimer [bbb,bbb[
    if(unMultiSetDeString.count(MultiSetDeString::value_type("bbb"))>=2){
        unMultiSetDeString.erase(resultatRange.first,resultatRange.second);
    }
    //Test
    MultiSetDeString :: iterator i4=unMultiSetDeString.begin();
    while(i4!=unMultiSetDeString.end()){
        cout << *i4 << endl;
        i4++;
    }
}
void listeSimple(){
    // 2-a) Creation de la list ListeS qui est une liste de string
    typedef list<string> ListeS;

    //2-b) Creation de l'objet uneListeS
    ListeS uneListeS; // Instanciation de uneListeS

    //2-c) Alimentation de la liste uneListeS

    uneListeS.push_back(ListeS ::value_type("Pantxika")); // Remarque c'esrt ListeS instancier qui dispose de la methode push_back voir sa Structure .cf
    uneListeS.push_back(ListeS ::value_type("Yann"));
    uneListeS.push_back(ListeS ::value_type("Philippe"));
    uneListeS.push_back(ListeS ::value_type("Patrick"));

    //2-d Creation de l'iterator
    ListeS :: iterator i; //On peut faire ca list<string> :: iterator i; mais bof :-(

    //2-e Initialisation de l'iterateur
    i=uneListeS.begin();

    //2-f) Parcours avant et complet de la liste et affiche chaque element
    while(i!=uneListeS.end()){
        cout << *i << endl;
        i++;
    }
    /*
    // On pouvais faire aussi
    for(i=uneListeS.begin();i!=uneListeS.end();i++){
        cout << *i;
        cout << endl;+
    */
}
void listePaires(){
    typedef pair<string,string> laPair;
    typedef list<laPair> listeP;
    laPair paire1("Panrxika","06.01.01.01.01");
    laPair paire2("Yann","06.02.02.02.02");
    laPair paire3("Philippe","06.03.03.03.03");
    laPair paire4("Patrick","06.04.04.04.04");
    listeP uneListeP;
    uneListeP.push_back(listeP :: value_type(paire1));
    uneListeP.push_back(listeP :: value_type(paire2));
    uneListeP.push_back(listeP :: value_type(paire3));
    uneListeP.push_back(listeP :: value_type(paire4));

    listeP :: iterator i = uneListeP.begin();
    while(i!=uneListeP.end()){
        cout << i->first +" "+ i->second << endl; /* Parceque'on a utiliser
        la notation lechee -> on n'ecrit pas ca *i car i-> est deja la facon
         pour ce pointeur d'acceder aux elelment correspondant */
        i++;
    }
}
void leMap(){
    typedef map<string,string> Annuaire;
    Annuaire unAnnuaire;
    //2-b
    typedef Annuaire ::iterator Iterateur; // N.B: Ce iterator i ne permert pas d'afficher les elements
    pair<Iterateur,bool> resultatInsert;
    // Declare variable resultatInsert pour reccuprer le resultat de l'insertion
    //2-c) et 2-d Alimentation de unAnnuiaire + affectation
    resultatInsert=unAnnuaire.insert(Annuaire::value_type("Pantxika","06.01.01.01.01"));
    /*Quand l'insertion ne se fait pas correctement(cad quand la valeur associer a la cle qu'on veut inserer n'existe pas prealablement)
    il retourne bien aussi la cle deja existance mais
    aussi false car cette cle existe deja */

    if(resultatInsert.second == true){
        cout << resultatInsert.first->first << endl; /* resultatInsert.first se positionne sur l'iterator i donc
        resultatInsert.first->i affiche le premier element du map ici "Pantxika"*/
        cout << "Insertion BIEN realise" << endl;
    }
    else{
        cout << "Insertion MAL realise" << endl;
    }
    //2-g
    resultatInsert=unAnnuaire.insert(Annuaire::value_type("Pantxika","06.01.01.01.01"));
    if(resultatInsert.second == true){
        //cout << resultatInsert.first->first << endl;
        cout << "Insertion BIEN realise" << endl;
    }
    else{
        cout << "Insertion MAL realise" << endl;
    }
    cout << endl;
    cout << "Deuxiemme Partie du tp : Nous voyons Pantxika en premier affichage a cause de la variable resultatInsert" << endl;
    cout << "Sinon elle serait en derniere position" << endl;
    cout << endl;
    //2-f
    unAnnuaire.insert(Annuaire::value_type("Yann","06.02.02.02.02"));
    unAnnuaire.insert(Annuaire::value_type("Philippe","06.03.03.03.03"));
    unAnnuaire.insert(Annuaire::value_type("Patrick","06.04.04.04.04"));
    // On obtient un resultat semblable a une pile -> Patrick ; Philippe ; Yann
    //2-h
    //typedef Annuaire ::iterator i2; // Ou bien i i2
    Iterateur unIterateur=unAnnuaire.begin();
    //2-i
    while(unIterateur!=unAnnuaire.end()){
        cout << unIterateur->first +" "+unIterateur->second << endl;
        unIterateur++;
    }
    //2-j Application de la methode find importante
    unIterateur=unAnnuaire.find("Philippe"); /* Rmq les methode des iterator s'applique toujours sur l'objet creer
                                    On ne peut pas faire XXXi2.find("Philippe)XXX*/
    //Comme la cle Philippe existe alors

    if(unIterateur!=unAnnuaire.end()){
            cout << unIterateur->second;
            unIterateur++;
    }
    else{
        cout << "La cle chercher est inconnue" << endl;
    }
}

class Produit{
private:
    string libelle;
    int prix;
    int laReference;
public:
    Produit(string libelle,int prix){
        this->prix=prix;
        this->libelle=libelle;
    }
    //L'operator bool a toujours un parametre
    //Operator de comparaison
    bool operator>(const Produit& produitAComparer)const{
        return this->laReference>produitAComparer.laReference;
    }
    bool operator==(const Produit& produitAComparer)const{
        return this->laReference==produitAComparer.laReference;
    }
    //Operator de calcul
    Produit operator+(const Produit& unProduit)const{
        return Produit( this->libelle + " " +  unProduit.libelle,this->prix + unProduit.prix);
    }

};

