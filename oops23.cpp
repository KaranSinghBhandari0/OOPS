#include <iostream>
#include <string>
using namespace std;

// class Template

template <typename T>
class base {
    T value;

    public:
    base(T v) {
        value = v;
    }
    void display() {
        cout << "Value is " << value << endl;
    }
};

int main() {
    base<int> b1(2);
    b1.display();

    base<string> b2("Karan");
    b2.display();

    base<double> b3(5.5);
    b3.display();
}