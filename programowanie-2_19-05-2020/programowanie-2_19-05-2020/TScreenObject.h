#pragma once
class TScreenObject
{
protected:
	int x, y;
public:
	TScreenObject(int x, int y);
	TScreenObject(const TScreenObject& other); // Konstruktor kopiujacy
	~TScreenObject();
	virtual void PrzeunOWektor(int deltaX, int deltaY);
	virtual void Wyswietl() const = 0; // Jak jest jedna virtual to wszystkie powinny byc virtualne
};

