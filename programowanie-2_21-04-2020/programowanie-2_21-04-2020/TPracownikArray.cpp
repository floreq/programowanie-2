#include "TPracownikArray.h"

TPracownikArray::TPracownikArray(int size)
{
	this->size = size;
	array = new TPracownik[size];
}

TPracownikArray::TPracownikArray(const TPracownikArray& other)
{
	size = other.size;
	array = new TPracownik[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
}

TPracownikArray::~TPracownikArray()
{
	delete[] array;
}

TPracownikArray& TPracownikArray::operator=(const TPracownikArray& other)
{
	delete[] this->array;

	size = other.size;
	array = new TPracownik[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
	return *this;
}

TPracownik& TPracownikArray::operator[](int i)
{
	if (i >= 0 && i < size) {
		return this->array[i];
	}
	else {
		throw "Brak indeksu";
	}
}
bool TPracownikArray::operator!=(const TPracownikArray& other) const
{
	if (size != other.size) return true;
	for (int i = 0; i < size; i++)
	{
		if (!(this->array[i] == other.array[i])) return true;
	}
	return false;
}


