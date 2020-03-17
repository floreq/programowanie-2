#include "TabelaOsob.h"

TabelaOsob::TabelaOsob(int size)
{
	this->size = size;
	array = new Osoba[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = new Osoba(0, "Nazwisko");
	}
}
