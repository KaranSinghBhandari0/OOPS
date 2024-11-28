#include <iostream>
#include <string>
using namespace std;

// constructor => A constructor is a special method in object-oriented programming used to initialize objects when they are created.
// destrctor => A destructor is a special method in object-oriented programming that is automatically invoked when an object is destroyed or goes out of scope.

// example
class student {
    public :
    
    string name;
    int age;

    // constructor
    student(string name, int age) {
        this->name = name;
        this->age = age;

        cout << "Student " << name << " is created." << endl;
    }

    // destructor is called automatically (we can also make)
    ~student() {
        cout << "Student " << name << " is destroyed." << endl;
    }
};

int main() {
    student s1("Karan", 21);
}
