#include "client.h"
#include <iostream>


using namespace std;
client::client(string num_CIN, string n, string p, int num){
    numero_CIN = num_CIN;
    nom = n;
    prenom = p;
    numero_tel =num ;
}
void client::affiche(){
    cout<<"numero de CIN : "<<numero_CIN<<"\nnom : "<<nom<<"\nprenom : "<<prenom<<"\nnumero de telephone : "<<numero_tel<<endl;

}
