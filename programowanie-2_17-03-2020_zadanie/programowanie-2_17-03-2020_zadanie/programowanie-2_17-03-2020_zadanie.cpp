#include <iostream>
#include "Osoba.h"
#include "TabelaOsob.h"

using namespace std;


int main()
{
	TabelaOsob t1(3);
	TabelaOsob t2(t1);
	TabelaOsob t3 = t2;

	cout << "T1\n"<< t1 << endl;
	cout << "T2\n" << t2 << endl;
	cout << "T3\n" << t3 << endl;

	t2[0] = "Jan";
	t2['0'] = "Kowalski";
	t3 = t2;

	cout << "T2\n" << t2 << endl;
	cout << "T3\n" << t3 << endl;

	if (t3 == t2) {
		cout << "Obiekty sa rowne" << endl;
	}
	else {
		cout << "Obiekty sa rozne" << endl;
	}

	t2[2] = "Wasilewski";
	cout << "t2[2] = \"Wasilewski\"" << endl;

	if (t3 == t2) {
		cout << "Obiekty sa rowne" << endl;
	}
	else {
		cout << "Obiekty sa rozne" << endl;
	}

	cout << "\nT1" << endl;
	cin >> t1;
	cout << t1 << endl;

	t3--;
	cout << "t3--\n" << t3;

	t1 += 10;
	cout << "\nt1 += 10\n" << "t1\n" << t1 << endl;

	system("pause");
}