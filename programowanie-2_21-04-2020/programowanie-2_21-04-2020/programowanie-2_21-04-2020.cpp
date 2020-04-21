#include <iostream>
#include "TPracownik.h"
#include "TPracownikArray.h"

using namespace std;

int main()
{
    TPracownik p1("Jan", "Kowalski", 1);
    TPracownik p2(p1);
    TPracownik p3("Marek", "Kowalski", 1);
    cout << (p1 == p2) << endl;
    cout << p1 << p2;

    p1.SetImie("Cezar");
    cout << p1;
    cout << p1.GetNazwisko() << endl;

    TPracownikArray tp1(10);
    TPracownikArray tp2(10);
    tp2 = tp1;
    cout << (tp1 != tp2) << endl;
    tp1[0] = p1;
    tp2[0] = TPracownik("Jan", "Kowalski", 1);
    cout << (tp1 != tp2) << endl;

    system("pause");
}

