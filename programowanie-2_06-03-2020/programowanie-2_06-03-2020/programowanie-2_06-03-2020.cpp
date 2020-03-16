#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

// Wstep (pozwala tak zorganizowac kod, ze najprosciej sie go uzywa)
class funkcjaKW {
	static int ileJuzfunkcjiKW;
	double a;
	double b;
	double c;
public:
	//void init(double a, double b, double c) {
	//	this->a = a;
	//	this->b = b;
	//	this->c = c;
	//}
	// Konstruktor
	funkcjaKW(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
		ileJuzfunkcjiKW++;
		cout << ileJuzfunkcjiKW << endl;
	}
	// Destruktor
	~funkcjaKW() {
		ileJuzfunkcjiKW--;
	}
	//double wyliczY(double x) {
	//	return a * x * x + b * x + c;
	//};
	double wyliczY(double x);
	// Funkcja statyczna (odnosi sie do klasy, a nie do obiektu. Dostep jest do statycznych elementow)
	static double wyliczY(double x, double a, double b, double c);
	void miejsceZ();
};

double funkcjaKW::wyliczY(double x) {
	return a * x * x + b * x + c;
}

double funkcjaKW::wyliczY(double x, double a, double b, double c) {
	return a * x * x + b * x + c;
}

void funkcjaKW::miejsceZ() {
	cout << "miejsce zerowe";
}

int funkcjaKW::ileJuzfunkcjiKW = 0;

// 1.1
class poczta {
public:
	char nadawca[50];
	char odbiorca[50];
	char temat[50];
	char tresc[200];
	//poczta(char nadawca[50], char odbiorca[50], char temat[50], char tresc[200]) {
	//	strcpy_s(this->nadawca, "Jan");
	//	strcpy_s(this->odbiorca, "Marek");
	//	strcpy_s(this->temat, "Ksiazka");
	//	strcpy_s(this->tresc, "Przykladowa tresc");
	//}
	void pocztaWypisz(poczta p);
	void pocztaWczytaj(poczta& p);
};

void poczta::pocztaWypisz(poczta p) {
	cout << "nadawca: " << p.nadawca << endl;
	cout << "odbiorca: " << p.odbiorca << endl;
	cout << "temat: " << p.temat << endl;
	cout << "tresc: " << p.tresc << endl;
}

void poczta::pocztaWczytaj(poczta& p) {
	cin >> p.nadawca >> p.odbiorca >> p.temat >> p.tresc;
}

// 1.5
struct poczta2 {
	char nadawca[50] = "Jan";
	char odbiorca[50] = "Marek";
	char temat[50] = "Ksiazka";
	char tresc[200] = "Tresc";
};

void poczta2Wypisz(poczta2 p) {
	cout << "nadawca: " << p.nadawca << endl;
	cout << "odbiorca: " << p.odbiorca << endl;
	cout << "temat: " << p.temat << endl;
	cout << "tresc: " << p.tresc << endl;
}

void poczta2Wczytaj(poczta2& p) {
	cin >> p.nadawca >> p.odbiorca >> p.temat >> p.tresc;
}

// 1.6
class ksiazka {
public:
	char tytul[50] = "Tytul";
	char autor[50] = "Autor";
	char wydawca[50] = "Wydawca";
	void ksiazkaWypisz();
	void ksiazkaWczytaj();
};

void ksiazka::ksiazkaWypisz() {
	cout << "tytul: " << tytul << endl;
	cout << "autor: " << autor << endl;
	cout << "wydawca: " << wydawca << endl;
}

void ksiazka::ksiazkaWczytaj() {
	cin >> tytul >> autor >> wydawca;
}

void ksiazkaWypisz(ksiazka k) {
	cout << "tytul: " << k.tytul << endl;
	cout << "autor: " << k.autor << endl;
	cout << "wydawca: " << k.wydawca << endl;
}

void ksiazkaWczytaj(ksiazka& k) {
	cin >> k.tytul >> k.autor >> k.wydawca;
}

// 1.10
class trojkat {
public:
	double wysokosc;
	double podstawa;
	trojkat(double wysokosc, double podstawa) {
		this->wysokosc = wysokosc;
		this->podstawa = podstawa;
	}
	void trojkatWczytaj() {
		cin >> wysokosc >> podstawa;
	}
	void trojkatWypisz() {
		cout << "wysokosc: " << wysokosc << endl;
		cout << "podstawa: " << podstawa << endl;
	}
	double trojkatPole() {
		return (wysokosc * podstawa) / 2;
	}
};

void trojkatWiekszy(trojkat &t1, trojkat &t2) {
	if (t1.trojkatPole() < t2.trojkatPole())
	{
		t2.trojkatWypisz();
	}
	else if (t1.trojkatPole() > t2.trojkatPole()) {
		t1.trojkatWypisz();
	}
	else {
		cout << "Trojkaty maja rowne pola" << endl;
	}
}

void trojkatWiekszy(trojkat* list[], int n) {
	double maxPole = 0;
	int l = 0;
	for (int i = 0; i < n; i++)
	{
		if (maxPole <= list[i]->trojkatPole())
		{
			maxPole = list[i]->trojkatPole();
			l = i;
		}
	}
	list[l]->trojkatWypisz();
}

// 1.13
class funkcjaL {
public:
	double a = 2;
	double b = 0;
	double wartosc(double x) {
		return a * x + b;
	};
};

// 1.14
class funkcjaK {
public:
	double a = 1;
	double b = 2;
	double c = 0;
	double wartosc(double x) {
		return a * x * x + b * x + c;
	};
	bool zero() {
		double delta = (b * b) - (4 * a * c);
		if (delta >= 0) {
			return true;
		}
		else {
			return false;
		}
	};
};

// 1.15
class liczba {
	double l;
public:
	void wczytaj() {
		cin >> l;
	}
	void wypisz() {
		cout << l;
	}
	void nadajW(double l) {
		this->l = l;
	}
	double wartosc() {
		return l;
	}
	double rAbs() {
		return abs(l);
	}
};

// 1.16
class portfel {
	double saldo;
public:
	void inicjuj() {
		this->saldo = 0;
	}
	void zarobki(double x) {
		this->saldo += x;
	}
	void wydatki(double x) {
		this->saldo -= x;
	}
};

// 1.17
class punkt {
	double x;
	double y;
public:
	void wczytaj() {
		cin >> x >> y;
	}
	void wypisz() {
		cout << "x, y =>" << x << ", " << y << endl;
	}
};

// 1.18
class punkt3 {
	double x;
	double y;
	double z;
public:
	void wczytaj() {
		cin >> x >> y >> z;
	}
	void wypisz() {
		cout << "x, y, z =>" << x << ", " << y << ", " << z << endl;
	}
};

int main()
{
	// Wstep
	{
		// Statycznie;
		//funkcjaKW kw(1, 0, -1);
		//funkcjaKW kw1(1, 0, -1);
		//{
		//	funkcjaKW kw(1, 0, -1);
		//	funkcjaKW kw1(1, 0, -1);
		//}
		//kw.a = 1;
		//kw.b = 0;
		//kw.c = -1;
		//kw.init(1, 0, -1);
		//cout << kw.wyliczY(0) << "\n";
		// Dynamicznie
		//funkcjaKW* kw2 = new funkcjaKW(0, 0, 0);
		//kw2->init(0, 0, 0);
	}
	// 1
	{
		//poczta p1;
		//strcpy_s(p1.nadawca, "Jan");
		//strcpy_s(p1.odbiorca, "Marek");
		//strcpy_s(p1.temat, "Ksiazka");
		//strcpy_s(p1.tresc, "Tresc");
		////pocztaWypisz(p1);
		//p1.pocztaWypisz(p1);
		////pocztaWczytaj(p1);
		//p1.pocztaWczytaj(p1);
		////pocztaWypisz(p1);
		//p1.pocztaWypisz(p1);
	}
	// 1.5 
	{
		//poczta2 p2;
		//poczta2Wypisz(p2);
		//poczta2Wczytaj(p2);
		//poczta2Wypisz(p2);
	}
	// 1.6-1.9
	{
		//ksiazka k1;
		//k1.ksiazkaWczytaj();
		//k1.ksiazkaWypisz();	
	}
	// 1.10
	{
		//trojkat t1(4, 4);
		//trojkat t2(4, 4);
		//t1.trojkatWczytaj();
		//t1.trojkatWypisz();
		//cout << t1.trojkatPole() << endl;
		//trojkatWiekszy(t1, t2);
	}
	// 1.12
	{
		//trojkat* listaTrojkatow[3];
		//listaTrojkatow[0] = new trojkat(100, 100);
		//listaTrojkatow[1] = new trojkat(20, 20);
		//listaTrojkatow[2] = new trojkat(500, 500);
		//trojkatWiekszy(listaTrojkatow, 3);
	}
	// 1.13 
	{
		//funkcjaL l1;
		//cout << l1.wartosc(2) << endl;
	}
	// 1.14
	{
		//funkcjaK k1;
		//cout << k1.wartosc(2) << endl;
		//cout << k1.zero() << endl;
	}
	// 1.15
	{
		//liczba l1;
		//l1.nadajW(-5);
		//cout << l1.rAbs() << endl;
	}
	// 1.17
	{
		//punkt p1;
		//p1.wczytaj();
		//p1.wypisz();
	}

	system("pause");
}