#include <iostream>

using namespace std;

int main()
{
    cout << ">>Dzisiaj rozdamy wszystkie skiny dla ziomali<<" << endl;
    
    cout << endl << "Ile skinow do lola jest do rozdania?: ";
    int skiny;
    cin >> skiny;
    
    cout << "Ilu masz kolegow?: ";
    int koledzy;
    cin >> koledzy;
    
    int wynik;
    wynik = skiny/koledzy;
    cout << "Jeden kolega dostanie tyle skinow: " << wynik;
    
    
    
    return 0;
}
