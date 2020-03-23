#pragma once
#include <iostream>
#include "Osoba.h"

using namespace std;

class TabelaOsob
{
private:
	int size;
	Osoba* array;
public:
	TabelaOsob(int size);
	TabelaOsob(const TabelaOsob& other);
	~TabelaOsob();

	TabelaOsob& operator=(const TabelaOsob& other);
	string& operator[](int id); // Pozwala zmienic Imie
	string& operator[](char id); // Pozwala zmienic Nazwisko
	TabelaOsob& operator--(int);
	void operator+=(int n);

	friend ostream& operator<< (ostream& out, const TabelaOsob& other);
	friend istream& operator>> (istream& in, const TabelaOsob& other);
	friend bool operator==(const TabelaOsob& x, const TabelaOsob& y);
};

