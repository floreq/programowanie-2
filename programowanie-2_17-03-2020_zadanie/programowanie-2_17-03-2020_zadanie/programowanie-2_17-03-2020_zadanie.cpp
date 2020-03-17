#include <iostream>
#include "Osoba.h"
#include "TabelaOsob.h"

using namespace std;


int main()
{
	Osoba o1(1, "Kowalski");
	TabelaOsob t1(5);

    std::cout << "Hello World!\n";
	system("pause");
}


//Napisaæ klasê Osoba z polami Id - int, Imie, Nazwisko - string, stworzyæ konstruktor z odpowiednimi parametrami
//Napisaæ klasê TabelaOsob z tworzon¹ wewn¹trz dynamicznie tabel¹ z obiektami typu osoba.
//Zdefiniowaæ:
//Konstruktor z parametream okreœlaj¹cym iloœæ osób
//Konstruktor kopiuj¹cy
//Destruktor
//operator=
//operator ==
//operator[] - umo¿liwiaj¹cy edycjê elementu o zadanym id
//operator << -wyœwietlajacy zawartoœæ tabeli na konsoli
//operator >> -wczytuj¹cy zawartoœæ tabeli z konsoli
//operator -- - zmiejszaj¹cy rozmiar tabeli o 1 element(ostani element w tabeli jest pomijany)
//operator += zwiêkszajacy rozmiar tabeli o n elementów