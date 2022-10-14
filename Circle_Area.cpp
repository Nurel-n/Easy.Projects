// Input (variabile)

#include "iostream"
using namespace std;

int main()
{

float raggio, area, circonferenza;
const float pigrego = 3.14;

cout << "INSERISCI IL RAGGIO: " <<endl;
cin >> raggio;

area = pigrego * (raggio*raggio);
circonferenza = 2 * pigrego * raggio;

cout <<"CIRCONFERENZA CERCHIO: " <<circonferenza <<endl;

cout <<"AREA CERCHIO: " <<area;

return 0;
    
}
