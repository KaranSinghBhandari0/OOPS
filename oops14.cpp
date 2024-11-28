#include<iostream>
#include<string>
using namespace std;

// Pure Virtual Functions    =>  A pure virtual function is a function in a class it is declared but not defined. It is meant to be overridden by derived classes, making the class containing it abstract. (every child must have an method of name same as of pure virtual function)
    
// Abstract Base class  =>  classes that contains atleast one virtual function. abtract base classes is used as a base class for other classes

// This class contains a virtual function so it's a abstract class
class base {
    public :
    virtual void display() = 0;    // This is How we declare a pure virtal function
};

class child1 : public base {
    void display() {
        cout << "This is child1" <<endl;
    }
};

class child2 : public base {
    void display() {
        cout << "This is child2" <<endl;
    }
};

int main() {
    base* b1;  // Pointer to base class

    // Assign derived class objects to base class pointer
    b1 = new child1();
    b1->display();  // Calls child1's display

    b1 = new child2();
    b1->display();  // Calls child2's display
}