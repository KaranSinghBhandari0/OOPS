// Inheritance => In Object-Oriented Programming (OOP), inheritance is a mechanism where a new class (called a derived class or child class) acquires the properties and behaviors (methods) of an existing class (called a base class or parent class). Inheritance allows for code reuse and helps in creating a hierarchical classification.
#include<iostream>
#include <string>
using namespace std;

// Base class
class laptop {
    public:
    void displayBrand() {
        cout << "Dell ";
    }
};

// derived class
class model : public laptop {
    int x;

    public:
    model(int x) {
        this->x = x;
    }
    void display() {
        cout << x;
    }
};

int main() {
    model m1(3511);
    m1.displayBrand();
    m1.display();
}

// Note : constrtuctor, destructor, friend functions can't be inherited
// We can't access private data members of parent class in child class so we use protected
// protected data members can be accesed in child class but not anywhere else

// What is diffrence b/w Composition and Inheritance ?