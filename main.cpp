#include <iostream>
#include "client.h"
#include "compte.h"
using namespace std ;


int main() //-- Utilisation de la classe --//
{
 double somme;
    cout<<"Depot d un montant de : ";
    cin>>somme;
    compte crediter(somme);
   
    client client1 ("FR-AAAC9171G210","DIOUF","Seynabou",622286455);
    client1.affiche();
    compte compte1 (125792367, 500);
    compte1.affiche();
    
}