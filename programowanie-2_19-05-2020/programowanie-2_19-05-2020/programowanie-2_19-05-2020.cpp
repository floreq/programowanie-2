#include <iostream>
#include "TScreenWall.h"

int main()
{
    //TScreenObject o1(10, 20); // Nie mozemy tego typu obiekut stworzyc, klasa apstrakcyjna
    TScreenObject* o1;
    TScreenWall w1;
    w1.Wyswietl();
    w1.PrzeunOWektor(5, 5);
    w1.Wyswietl();

    // Polimorfizm, wskaznik do obiektu typu bazowego mozna go ustawic z klasy pochodnej, adres dowolnego obiektu
    o1 = &w1;
    o1 = new TScreenWall();

    // Dynamiczne wiazanie, majac wskaznik do typu bazowego, mozna wykonac operacje na obiekcie i zostanie odnalezione odpowiednia funkcja
    o1->Wyswietl();
    o1->PrzeunOWektor(2, 2);
    o1->Wyswietl();

    delete o1; // Jak cos tworzymy dynamicznie to usuwmy, new TscrennWall
}

//Przykładowy zestaw:
//Utworzyć abstrakcyjną klasę TScreenObject będącą klasą bazową dla rożnych obiektów wyświetlanych na ekranie. 
//Zdefiniować w klasie:
//- pola x, y – przechowujące współrzędne obiektu na ekranie.
//- konstruktor ustawiający pola x, y,
//- konstruktor kopiujący
//- destruktor
//- Funkcje PrzesunOWektor przesuwającą obiekt o określone wartość przesunięcia deltaX, deltaY
//- czysto wirtualną funkcje Wyswietl
//- Napisać definicje klasy pochodnej(stosując dziedziczenie typu public) TScreenWall dodając w klasie dodatkowe pole Wysokosc, Dlugosc.
//- Zdefiniować konstruktor domyślny
//- Zdefiniować funkcję Wyświetl
//- W funkcji main Zaprezentować działanie napisanych klas stosując odwołania polimorficzne.
