#pragma once
#include <string>

using namespace std;

class Shape
{
// Dziala podobnie jak privet, lecz klasy ktore dziedzicza po tej klasie to pole bedzie jak w public
protected:
	string name;
public:
	Shape(string name);

	// const jest po to jakbysmy chcieli zadeklarowac, np. w main staly obiekt, const Circle(10);
	// virtual dla tych metod dobiera odpowiedni typ taki jaki typ ma klasa ktora dziedziyczy
	virtual double Area() const;
	virtual double Perimeter() const;

	friend ostream& operator <<(ostream& out, const Shape& other);
};

