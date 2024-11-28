#include <iostream>
#include <string>
using namespace std;

// Constructor Overloading => a class have more than one constructor and we can call anyone we want

class MyClass {
    int x;
    int y;

public:
    // Constructor 1: No parameters
    MyClass() {
        x = 0;
        y = 0;
    }

    // Constructor 2: One parameter
    MyClass(int a) {
        x = a;
        y = 0;
    }

    // Constructor 3: Two parameters
    MyClass(int a, int b) {
        x = a;
        y = b;
    }

    // Function to display values
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    MyClass obj1;              // Calls Constructor 1
    MyClass obj2(5);           // Calls Constructor 2
    MyClass obj3(5, 10);       // Calls Constructor 3

    cout << "Obj1: ";
    obj1.display();
    cout << "Obj2: ";
    obj2.display();
    cout << "Obj3: ";
    obj3.display();

    return 0;
}
