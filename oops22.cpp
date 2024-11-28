#include <iostream>
#include <string>
using namespace std;

// Overloading function templates

template <typename T>
void display(T child) {
    cout << "Hello i am " << child << endl;
}

template <typename T>
void display(T child , T father) {
    cout << "Hello i am " << child << " I am " << father << " son " << endl;
}

int main() {
    display("monu");
    display("monu","sonu");
    display(1,0);
}