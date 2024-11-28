#include <iostream>
#include <string>
using namespace std;

// global sabse last mai destroy hoga
// static members end mai destroy honge (after destroy of normal) in reverse order

class object {
public:
    int id;

    // Parameterized constructor
    object(int id) {
        this->id = id;
        cout << "Object created with id " << id << endl;
    }

    // Destructor
    ~object() {
        cout << "Object destroyed with id " << id << endl;
    }
};

void func() {
    object obj1(4);
    static object obj2(5); 
    object obj3(6);     
}

object global_obj(1); 

int main() {
    object obj1(2); 
    func();          
    static object obj2(3);
    func();             
    return 0;
}

// created 1
// created 2
// created 4 
// created 5
// created 6
// destroyed 6
// destroyed 4
// created 3
// created 4
// created 6
// destroyed 6
// destroyed 4
// destroyed 2
// destroyed 3
// destroyed 5
// destroyed 1