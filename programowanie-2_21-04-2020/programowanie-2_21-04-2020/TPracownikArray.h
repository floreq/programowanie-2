#pragma once
#include "TPracownik.h"

class TPracownikArray
{
private:
	int size;
	TPracownik* array;
public:
	TPracownikArray(int size);
	TPracownikArray(const TPracownikArray& other);
	~TPracownikArray();
	TPracownikArray& operator= (const TPracownikArray& other);
	TPracownik& operator[] (int i);
	bool operator!= (const TPracownikArray& other) const;
};

