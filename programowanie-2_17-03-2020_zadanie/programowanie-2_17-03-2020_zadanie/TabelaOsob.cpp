#include "TabelaOsob.h"

TabelaOsob::TabelaOsob(int size)
{
	this->size = size;
	this->array = new Osoba[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = Osoba(i, "-");
	}
}

TabelaOsob::TabelaOsob(const TabelaOsob& other)
{
	this->size = other.size;
	array = new Osoba[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
}

TabelaOsob::~TabelaOsob()
{
	delete[] array;
}

TabelaOsob& TabelaOsob::operator=(const TabelaOsob& other)
{
	delete[] array;
	this->size = other.size;
	array = new Osoba[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
	return *this;
}

string& TabelaOsob::operator[](int id)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i].Id == id)
		{
			return array[id].Nazwisko;
		}
	}
	throw "Brak podanego id";
}

TabelaOsob& TabelaOsob::operator--(int)
{
	TabelaOsob oldValue = *this;
	this->size--;
	return oldValue;
}

void TabelaOsob::operator+=(int n)
{
	// Zrobienie kopi array
	Osoba* oldArray = new Osoba[size];
	for (int i = 0; i < size; i++)
	{
		oldArray[i] = array[i];
	}
	int oldSize = size;
	this->size += n;
	delete[] array;
	array = new Osoba[size];
	// Przekopiowanie starego arraya do wiekszego
	for (int i = 0; i < oldSize; i++)
	{
		array[i] = oldArray[i];
	}
	// Inicjalizacja nowych wartosci
	for (int i = oldSize; i < size; i++) {
		array[i] = Osoba(i, "-");
	}
}

ostream& operator<<(ostream& out, const TabelaOsob& other)
{
	for (int i = 0; i < other.size; i++)
	{
		out << "Id: " << other.array[i].Id << " Nazwisko: " << other.array[i].Nazwisko << endl;
	}
	return out;
}

istream& operator>>(istream& in, const TabelaOsob& other)
{
	for (int i = 0; i < other.size; i++)
	{
		cout << "Podaj id: ";
		in >> other.array[i].Id;
		cout << "Podaj nazwisko: ";
		in >> other.array[i].Nazwisko;
	}
	return in;
}

bool operator==(const TabelaOsob& x, const TabelaOsob& y)
{
	if (x.size != y.size)
	{
		return false;
	}
	for (int i = 0; i < x.size; i++)
	{
		if (x.array[i].Id != y.array[i].Id || x.array[i].Nazwisko != y.array[i].Nazwisko)
		{
			return false;
		}
	}
	return true;
}
