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


//Napisa� klas� Osoba z polami Id - int, Imie, Nazwisko - string, stworzy� konstruktor z odpowiednimi parametrami
//Napisa� klas� TabelaOsob z tworzon� wewn�trz dynamicznie tabel� z obiektami typu osoba.
//Zdefiniowa�:
//Konstruktor z parametream okre�laj�cym ilo�� os�b
//Konstruktor kopiuj�cy
//Destruktor
//operator=
//operator ==
//operator[] - umo�liwiaj�cy edycj� elementu o zadanym id
//operator << -wy�wietlajacy zawarto�� tabeli na konsoli
//operator >> -wczytuj�cy zawarto�� tabeli z konsoli
//operator -- - zmiejszaj�cy rozmiar tabeli o 1 element(ostani element w tabeli jest pomijany)
//operator += zwi�kszajacy rozmiar tabeli o n element�w