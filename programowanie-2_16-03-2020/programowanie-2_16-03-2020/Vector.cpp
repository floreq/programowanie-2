#include "Vector.h"

Vector::Vector(int size)
{
	this->size = size;
	array = new double[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
	}
}

Vector::Vector(const Vector& other)
{
	this->size = other.size;
	array = new double[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
}

Vector::~Vector()
{
	delete[] array;
}

Vector& Vector::operator=(const Vector& other)
{
	delete[] array;
	this->size = other.size;
	array = new double[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}

	return *this;
}

Vector& Vector::operator+(const Vector& other)
{
	this->size = other.size;
	Vector result(*this);
	for (int i = 0; i < size; i++)
	{
		array[i] += other.array[i];
	}
	return result;
}

// Pre
Vector& Vector::operator++()
{
	for (int i = 0; i < size; i++)
	{
		array[i] += 1;
	}
	return *this;
}

// Post
Vector& Vector::operator++(int)
{
	Vector oldValue = *this;
	for (int i = 0; i < size; i++)
	{
		array[i] += 1;
	}
	return oldValue;
}

double& Vector::operator[](int i)
{
	if (i >= 0 && i < size)
		return array[i];
	else
	{
		throw "Indeks poza zakresem tablicy";
	}
}

double& Vector::operator[](char i)
{
	char l = i - '0';
	if (l >= 0 && l < size)
		return array[l];
	else
	{
		throw "Indeks poza zakresem tablicy";
	}
}

ostream& operator<<(ostream& out, const Vector& other)
{
	for (int i = 0; i < other.size; i++)
	{
		out << other.array[i] << " ";
	}
	return out;
}

bool operator==(const Vector& x, const Vector& y)
{
	for (int i = 0; i < x.size; i++)
	{
		if (x.array[i] != y.array[i])
		{
			return false;
		}
	}
	return true;
}
