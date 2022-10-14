// Input (variabile)

#include "iostream"
using namespace std;

int main()
{

float Prezzo1, Prezzo2,  SoldiRisp,PrezzoTot;
const float Sconto =20;

cout << "INSERISCI PREZZO ORIGINALE: " <<endl;
cin >> Prezzo1;

Prezzo2 = (Prezzo1/100) * Sconto;
PrezzoTot = Prezzo1 - Prezzo2;
SoldiRisp = Prezzo1 - PrezzoTot;
cout <<"Pagato: " <<Prezzo1 <<endl;

cout <<"Sconto: " <<Sconto <<endl;

cout <<"Soldi spesi: " <<PrezzoTot <<endl;

cout <<"Soldi risparmiati: " <<SoldiRisp <<endl;

return 0;
    
}
