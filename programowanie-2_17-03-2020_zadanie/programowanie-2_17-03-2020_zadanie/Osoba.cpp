#include "Osoba.h"

Osoba::Osoba()
{
	this->Id = 0;
	this->Imie = "-";
	this->Nazwisko = "-";
}

Osoba::Osoba(int id, string imie, string nazwisko)
{
	this->Id = id;
	this->Imie = imie;
	this->Nazwisko = nazwisko;
}
