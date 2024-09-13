//-- La déclaration de la classe compte --//
#include <iostream>
#include <string>
using namespace std;
class compte
{
    private:
    int numero_de_compte;
    float solde;

    public:
    compte(int, float);
    void crediter(double); // deposant la somme
    void debiter(); 
    void consulter();
    void virement();
    void commander(); 
    void affiche();


};