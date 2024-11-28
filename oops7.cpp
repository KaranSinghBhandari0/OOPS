#include <iostream>
#include <string>
using namespace std;

// static date members => They are not created again and again but can be used by all.
// this pointer does not work with static member function because object is not created

class Object {
    static int day;

public:
    // Constructor
    Object() {
        ++day;
    }

    // Static member function
    static void displayDay() {
        cout << "Static Day: " << day << endl;
    }
};

// initialization of static
int Object::day = 0;

int main() {
    Object o1;
    Object o2;

    Object::displayDay();

    return 0;
}