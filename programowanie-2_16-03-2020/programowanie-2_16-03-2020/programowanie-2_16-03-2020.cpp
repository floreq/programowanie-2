#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	// Rozne mozliwosci inicjalizacji
	Vector v1(3);
	Vector v2(v1);
	Vector v3 = v2; // Dziala konstruktor kopiujacy

	v2[1] = 11;
	v2[2] = 22;
	v3 = v2;
	v3 + v2;
	v3['0'] = 50;
	v1++;

	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;

	if (v3 == v2) {
		cout << "Wektor rowne" << endl;
	}
	else {
		cout << "Wektory rozne" << endl;
	}

	system("pause");
}