#include <iostream>
#include <string>
using namespace std;

template<class ElementType> 
class ListNode {
public:
    ElementType Data;
    ListNode* next;
};

template<class ElementType>
class List1D {
    ListNode<ElementType>* head;
    ListNode<ElementType>* tail;
public:
    //AddElementAtFront();
    //ListNode FintElement(const ElementType& valueToFind);
    //List1D(List1D& other);
    // Przetestowac to z klasa Car;
    List1D() {
        head = nullptr;
        tail = nullptr;
    }
    ~List1D() {
        ListNode<ElementType>* tmp = head;
        while (tmp != nullptr)
        {
            head = head->next;
            delete tmp;
            tmp = head;
        }
    }
    void AddElementAtEnd(ListNode<ElementType>* toAdd) {
        if (head == nullptr) {
            head = toAdd;
            tail = toAdd;
            head->next = nullptr;
        }
        tail->next = toAdd;
        toAdd->next = nullptr;
        tail = toAdd;
    }
    void AddElementAtEnd(const ElementType& valueToAdd) {
        ListNode<ElementType>* toAdd = new ListNode<ElementType>();
        toAdd->Data = valueToAdd;
        AddElementAtEnd(toAdd);
    }
    void AddElementAtFront(ListNode<ElementType>* toAdd) {
        if (head == nullptr) {
            head = toAdd;
            tail = toAdd;
            head->next = nullptr;
        }
        toAdd->next = head;
        head = toAdd;
    }
    void AddElementAtFront(const ElementType& valueToAdd) {
        ListNode<ElementType>* toAdd = new ListNode<ElementType>();
        toAdd->Data = valueToAdd;
        AddElementAtFront(toAdd);
    }
    ListNode<ElementType> FintElement(const ElementType& valueToFind) {
        ListNode<ElementType>* tmp = head;
        while (tmp->Data != valueToFind) {
            tmp = tmp->next;
        }
        return 123;
    }
    void Display() {
        ListNode<ElementType>* tmp = head;
        while (tmp != nullptr) {
            cout << tmp->Data << endl;
            tmp = tmp->next;
        }
    }
};

class Osoba {
    int id;
    string imie;
    string nazwisko;
public:
    Osoba() {} // Obiekty musza miec konsturktor domyslny, jesli sa szablony
    Osoba(int id, string imie, string nazwisko): id(id), imie(imie), nazwisko(nazwisko) {}
    friend ostream& operator<<(ostream& out, const Osoba& element);
};

ostream& operator<<(ostream& out, const Osoba& element) {
    out << element.id << " " << element.imie << " " << element.nazwisko;
    return out;
}

int main()
{
    List1D<double> l1;
    l1.AddElementAtEnd(10);
    l1.AddElementAtEnd(20);
    l1.AddElementAtEnd(30);
    l1.Display();
    l1.FintElement(20);

    List1D<Osoba> l2;
    l2.AddElementAtEnd(Osoba(1, "Jan", "Kowalski"));
    l2.AddElementAtEnd(Osoba(2, "Zenon", "Kowalski"));
    l2.AddElementAtEnd(Osoba(3, "Monika", "Kowalski"));
    //l2.Display();
    l2.AddElementAtFront(Osoba(4, "Klaudia", "Zawada"));
    l2.Display();
}
