#include <iostream>
#include <string>
#include "newvector.h"

using namespace std;

int main()
{
// création et accés en lecture d'un vecteur

    int n; int e; string rep; float modif;

    cout << "Quelle est la taille de votre vecteur ? " ;
    cin >> n;

    newvector v(n);


    cout << "Quel élément voulez vous voir ? " ;
    cin >> e;
    while (e >= n){
        cout << "Indice trop eleve. Try again !" << endl;
        cin >> e;
        }
    cout << "Element numero " << e << ": " << v.getelem(e) << endl;


    cout << "Voulez vous modifier le vecteur? [o/n]" ;
    cin >> rep;
    if (rep == "o"){

        cout << "Quel élément voulez vous modifier ? ";
        cin >> e;
        while (e >= n){
            cout << "Indice trop eleve. Try again !" << endl;
            cin >> e;
            }

        cout << "Element numero " << e << ": " << v.getelem(e) << endl;
        cout << "Par quoi voulez vous le remplacer? " ;
        cin >> modif;
        v.modifiervect(e, modif);
        cout << "Modification reussie" << endl;}


//somme de deux vecteurs
/*
    newvector v1(6), v2(6);
        for (int l=0; l< 6 ; l++){
            v1.modifiervect(l, l);
            v2.modifiervect(l, l*2);
        }

        v1.somme2vect(v2);
        for (int l=0; l<6; l++){
            cout << v1.getelem(l) << " ";
        }
*/

//Suppression d'un élément du vecteur
 /*   newvector v(6);
    for (int l=0; l < v.t ; l++){
            v.modifiervect(l, l);
            cout << v.getelem(l) << " " ;
        }
    v.supp1elem(2);
     for (int l=0; l < v.t; l++){
            cout << v.getelem(l) << " " ;

        }
*/

    return 0;
}


