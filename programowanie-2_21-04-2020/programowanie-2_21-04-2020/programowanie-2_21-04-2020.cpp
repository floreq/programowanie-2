#include <iostream>
#include "TPracownik.h"
#include "TPracownikArray.h"

using namespace std;

int main()
{
    TPracownik p1("Jan", "Kowalski", 1);
    TPracownik p2(p1);
    cout << (p1 == p2) << endl;
    cout << p1 << p2;

    TPracownikArray tp1(10);
    TPracownikArray tp2(10);
    tp1[0] = p1;
    tp2[0] = TPracownik("Marek", "Aureliusz", 1);
    cout << (tp1 != tp2) << endl;

    system("pause");
}

