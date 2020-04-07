#include "TStudentArray.h"

TStudentArray::TStudentArray()
{
	size = 10;
	array = new TStudent[10];
}

TStudentArray::TStudentArray(const TStudentArray& other)
{
	size = other.size;
	array = new TStudent[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
}

TStudentArray::~TStudentArray()
{
	delete[] array;
}

TStudentArray& TStudentArray::operator=(const TStudentArray& other)
{
	delete[] this->array;

	size = other.size;
	array = new TStudent[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}

	return *this;
}

TStudent& TStudentArray::operator[](int i)
{
	if (i>=0 && i< size) {
		return this->array[i];
	}
	else {
		throw "Index out of range";
	}
}

bool TStudentArray::operator==(const TStudentArray& other) const
{
	if (size != other.size) return false;
	for (int i = 0; i < size; i++)
	{
		if (this->array[i] != other.array[i]) {
			return false;
		}
	}
	return true;
}
