#pragma once
#include <string>

using namespace std;

class TStudent
{
private:
	string imie, nazwisko;
	int nr_indeksu;
	static int students_count;
public:
	TStudent(string imie, string nazwisko, int nr_indeksu);
	TStudent();

	TStudent(const TStudent& other); // Konstruktor kopiujacy
	~TStudent(); // Zmniejszamy tutaj students_count

	string GetImie() const;
	void SetNazwisko(string nazwisko);

	friend ostream& operator<< (ostream& out, const TStudent& other);
	bool operator!= (const TStudent& other) const;
};
