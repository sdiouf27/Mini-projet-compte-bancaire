#include "compte.h"
#include <iostream>


using namespace std;
compte::compte(int num_cmpt, float s){
    numero_de_compte = num_cmpt;
    solde = s;

}
// depot 
void compte::crediter(double somme){

  solde+= somme;
  
} 

void compte::affiche(){
    
    cout<<"numero de compte : "<<numero_de_compte<<"\nsolde : "<<solde<<endl;
    
}