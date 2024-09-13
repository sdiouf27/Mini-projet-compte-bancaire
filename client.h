//-- La déclaration de la classe client --//
#include <iostream>
#include <string>
using namespace std;
class client
{
    private:
    string numero_CIN;
    string nom ;
    string prenom ;
    int numero_tel ;

    public:
    client(string, string, string, int);
    void affiche();

};