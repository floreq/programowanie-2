#pragma once

#include <iostream>
using namespace std;

class Vector
{
private:
	int size;
	double* array;
public:
	Vector(int size);
	Vector(const Vector& other); // Konstruktor kopiujacy
	~Vector(); // Destruktor

	Vector& operator=(const Vector& other); // Taki sam typ jak kontrtuktor kopiuj¹cy
	Vector& operator+(const Vector& other);
	Vector& operator++();
	Vector& operator++(int);

	double& operator[](int i); // dlatego &, ze v1[1] = 122, chcemy miec mozliwoasc edycji;
	double& operator[](char i);

	friend ostream& operator<< (ostream& out, const Vector& other);
	friend bool operator==(const Vector& x, const Vector& y);
	friend bool operator==(const Vector& x, const Vector& y);
};

