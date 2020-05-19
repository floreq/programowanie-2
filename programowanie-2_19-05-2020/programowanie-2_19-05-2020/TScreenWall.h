#pragma once
#include "TScreenObject.h"
class TScreenWall :
	public TScreenObject
{
protected:
	int wysokosc, dlugosc;
public:
	TScreenWall(); // Konstruktor domylsny
	virtual void Wyswietl() const;
	
	// Przedefiniowanie klasy bazowej, nadpisanie jej. Moze byc takie polecenie
	virtual void PrzeunOWektor(int deltaX, int deltaY);
};

