#pragma once
class Vehicle
{
protected:
	int x, y;
public:
	Vehicle(int x, int y);
	virtual ~Vehicle();

	virtual int GetX() const;
	virtual int GetY() const;
	virtual void SetX(int newX);
	virtual void SetY(int newY);
	virtual void MoveTo(int newX, int newY);
	virtual void MoveBy(int deltaX, int deltaY);
	void GoToXY(int x, int y) const;

	virtual void Display() const = 0; // funkcja czysto wirtualna (klasa staje sie abstrakcyjna)
};

