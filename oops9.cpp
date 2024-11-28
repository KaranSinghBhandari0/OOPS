#include <iostream>
#include <string>
using namespace std;

// This is function Overloading => same function but different parameters / return type

void show(int i) {
    cout << "Integer: " << i << endl;
}

void show(double d) {
    cout << "Double: " << d << endl;
}

void show(const string& s) {
    cout << "String: " << s << endl;
}

int main() {
    show(5);        // Calls show(int)
    show(5.5);      // Calls show(double)
    show("Hello");  // Calls show(string)
    return 0;
}
