#include <iostream>
#include <string>
using namespace std;

// friend function

class Complex {
    int a;
    int b;

public:
    Complex(int a, int b) {
        this-> a = a;
        this->b = b;
    }

    // we have declared friend function
    friend void sumComplex(Complex o1, Complex o2);

    void print() {
        cout << a << " + " << b << "i" << endl;
    }
};

// This can't directly access private data members of Complex class so we use friend function
void sumComplex(Complex o1, Complex o2) {
    Complex o3((o1.a + o2.a) , (o1.b+o2.b));
    o3.print();
}

int main() {
    Complex c1(3,2);
    Complex c2(1,5);

    sumComplex(c1,c2);
}