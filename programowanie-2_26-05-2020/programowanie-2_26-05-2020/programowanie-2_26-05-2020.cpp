#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zapisanie do pliku rozmiaru tablicy 2D (pierwsza linia), zapisanie tekstu (druga linie)
void toFile(int n, double** array2D) {
	ofstream out;
	out.open("file2D.txt");
	out << n << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			out << array2D[i][j] << ";";
		}
		out << endl;
	}
	out.close();
};
// Odczytanie z pliku rozmiaru poprzedniej tablicy (pierwsza linia pliku)
int sizeFromFile() {
	ifstream input("file2D.txt");
	string n;
	getline(input, n);
	input.close();
	return stoi(n); // zamiana string na int
}

void toArray(int n, double** array2D) {
	ifstream input("file2D.txt");
	for (int i = 0; i < n; i++)
	{
		char tmp[255];
		input.getline(tmp, 255, '\n');
		for (int j = 0; j < n; j++)
		{
			char buffer[255];
			input.getline(buffer, 255, ';');
			string convert = buffer; // uzycie stringa do pozniejszej zamiany char na double
			array2D[i][j] = stod(convert); // wpisanie do tablicy 2D oraz zamiana string na double
		}
	}
	input.close();
}

int main()
{
	int n = 3;
	double** array2D = new double*[n];
	for (int i = 0; i < n; i++)
	{
		array2D[i] = new double[n];
	}
	
	array2D[0][0] = 2.1;
	array2D[0][1] = 2.4;
	array2D[0][2] = 3.5;
	array2D[1][0] = 2.2;
	array2D[1][1] = 2.6;
	array2D[1][2] = 3.6;
	array2D[2][0] = 4.0;
	array2D[2][1] = 5;
	array2D[2][2] = 7;

	toFile(n, array2D);
	int size = sizeFromFile(); // odczytanie rozmiaru tablicy z pliku
	double** newArray2D = new double* [size];
	for (int i = 0; i < n; i++)
	{
		newArray2D[i] = new double[size];
	}

	toArray(size, newArray2D);

	cout << newArray2D[0][0] << endl;
	cout << newArray2D[0][1] << endl;
	cout << newArray2D[0][2] << endl;
	cout << newArray2D[1][0] << endl;
	cout << newArray2D[1][1] << endl;
	cout << newArray2D[1][2] << endl;
	cout << newArray2D[2][0] << endl;
	cout << newArray2D[2][1] << endl;
	cout << newArray2D[2][2] << endl;

	delete array2D;
	delete newArray2D;
}
