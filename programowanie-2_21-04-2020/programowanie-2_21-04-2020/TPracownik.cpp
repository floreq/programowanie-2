#include "TPracownik.h"
#include <iostream>

using namespace std;

int TPracownik::pracownik_count = 0;

TPracownik::TPracownik(string imie, string nazwisko, int nr_pracownika)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->nr_pracownika = nr_pracownika;
	pracownik_count++;
}

TPracownik::TPracownik()
{
	this->imie = "";
	this->nazwisko = "";
	this->nr_pracownika = 0;
	pracownik_count++;
}

TPracownik::TPracownik(const TPracownik& other)
{
	this->imie = other.imie;
	this->nazwisko = other.nazwisko;
	this->nr_pracownika = other.nr_pracownika;
	pracownik_count++;
}

TPracownik::~TPracownik()
{
	pracownik_count--;
}

string TPracownik::GetNazwisko() const
{
	return nazwisko;
}

void TPracownik::SetImie(string imie)
{
	this->imie = imie;
}

bool TPracownik::operator==(const TPracownik& other) const
{
	if (this->imie != other.imie) return false;
	if (this->nazwisko != other.nazwisko) return false;
	if (this->nr_pracownika != other.nr_pracownika) return false;
	return true;
}

ostream& operator<<(ostream& out, const TPracownik& other)
{
	out << other.imie << " " << other.nazwisko << " " << other.pracownik_count << endl;
	return out;
}
