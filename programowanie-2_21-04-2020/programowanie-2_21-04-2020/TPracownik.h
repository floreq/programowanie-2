#pragma once
#include <string>

using namespace std;

class TPracownik
{
private:
	string imie, nazwisko;
	int nr_pracownika;
	static int pracownik_count;
public:
	TPracownik(string imie, string nazwisko, int nr_pracownika);
	TPracownik();

	TPracownik(const TPracownik& other);
	~TPracownik();

	string GetNazwisko() const;
	void SetImie(string imie);

	friend ostream& operator<< (ostream& out, const TPracownik& other);
	bool operator== (const TPracownik& other) const;
};

