#include <iostream>
#include "TStudent.h"
#include "TStudentArray.h"

using namespace std;

int main()
{
    TStudent s1("Jan", "Kowalski", 1);
    TStudent s2(s1);
    TStudentArray ts;

    cout << s1 << endl; 
    cout << s2 << endl;
    cout << (s1 != s2) << endl;

    ts[0] = s1;
    ts[1].SetNazwisko("Nowak");

    for (int i = 0; i < 10; i++)
    {
        cout << ts[i] << endl;
    }
    system("pause");
}

//Przykładowe zadanie:
//
//(5 pkt.) Napisz klasę TStudent z następującymi polami prywatnymi :
//
//imie, nazwisko – obiekty typu string, 
//nr_indeksu – liczba całkowita, 
//student_count – statyczne pole typu całkowitego określające liczbę obiektów typu TStudent aktualnie istniejących w programie
//
//Zdefiniuj następujące funkcje składowe:
//konstruktor inicjujący wszystkie pola przesłanymi wartościami,
//konstruktor domyślny inicjujący pola pustymi ciągami znaków lub wartością 0
//selektor dla pola imie
//modyfikator pola nazwisko
//operator << służący do przesłania obiektu TStudent do strumienia(np.cout)
//operator!= sprawdzający czy dwa obiekty typu TStudent są różne
//
//(5 pkt.) Napisz klasę TStudentArray, której głównym składnikiem prywatnym będzie dynamicznie tworzona tablica obiektów typu TStudent
//Zdefiniuj następujące funkcje :
//
//Konstruktor domyślny tworzący tablicę 10 elementową
//konstruktor kopiujący
//destruktor
//operator = kopiujący obiekt typu TStudentArray
//operator[ ] – umożliwiający edycję wybranego elementu w tablicy
//operator== porównujący ze sobą dwie tablice
