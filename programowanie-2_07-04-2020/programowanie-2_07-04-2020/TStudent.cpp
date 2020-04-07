#include "TStudent.h"
#include <iostream>

using namespace std;

int TStudent::students_count = 0; // Definicja zmiennej statycznej

TStudent::TStudent(string imie, string nazwisko, int nr_indeksu)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->nr_indeksu = nr_indeksu;
	students_count++;
}

TStudent::TStudent()
{
	this->imie = "";
	this->nazwisko = "";
	this->nr_indeksu = 0;
	students_count++;
}

TStudent::TStudent(const TStudent& other)
{
	this->imie = other.imie;
	this->nazwisko = other.nazwisko;
	this->nr_indeksu = other.nr_indeksu;
	students_count++;
}

TStudent::~TStudent()
{
	students_count--;
}

string TStudent::GetImie() const
{
	return imie;
}

void TStudent::SetNazwisko(string nazwisko)
{
	this->nazwisko = nazwisko;
}

bool TStudent::operator!=(const TStudent& other) const
{
	if (this->nazwisko != other.nazwisko) return true;
	if (this->imie != other.imie) return true;
	if (this->nr_indeksu != other.nr_indeksu) return true;
	return false;
}

ostream& operator<<(ostream& out, const TStudent& other)
{
	out << other.imie << " " << other.nazwisko << " " << other.nr_indeksu;
	return out;
}
