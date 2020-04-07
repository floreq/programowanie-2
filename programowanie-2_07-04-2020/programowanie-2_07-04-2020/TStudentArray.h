#pragma once
#include "TStudent.h"

class TStudentArray
{
private:
	int size;
	TStudent* array;
public:
	TStudentArray();
	TStudentArray(const TStudentArray& other); // Konstruktor kopiujacy zawsze trzeba zdefiniowac gdy sa elementy dynamiczne
	~TStudentArray(); // Podobnie jak jest cos tworzone dynamicznie to tez trzeba

	TStudentArray& operator= (const TStudentArray& other);
	TStudent& operator[] (int i);
	bool operator== (const TStudentArray& other) const;
};

