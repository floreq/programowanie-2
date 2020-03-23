#pragma once
#include <iostream>
#include <string>

using namespace std;

class Osoba
{
public:
	int Id;
	string Imie;
	string Nazwisko;
	Osoba();
	Osoba(int id, string imie, string nazwisko);
};

