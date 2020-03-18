#include "Osoba.h"

Osoba::Osoba()
{
	this->Id = 0;
	this->Nazwisko = "-";
}

Osoba::Osoba(int id, string nazwisko)
{
	this->Id = id;
	this->Nazwisko = nazwisko;
}
