#include <iostream>
#include "Circle.h"
#include "Wheel.h"
#include "Rectangle.h"
#include "Square.h"
#include "Diamond.h"

using namespace std;

int main()
{
	Circle c1(10);

	// Z dziedziczenia dostalismy dostep do tych funkcji z Shape
	cout << c1.Area() << endl;
	cout << c1.Perimeter() << endl;

	cout << c1 << endl;

	Wheel w1(10);
	cout << w1 << endl;
	Rectangle r1(5, 10);
	cout << r1 << endl;
	Square s1(5);
	cout << s1 << endl;
	Diamond d1(2, 3);
	cout << d1 << endl;

	system("pause");
}
