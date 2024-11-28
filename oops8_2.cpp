#include <iostream>
#include <string>
using namespace std;

class complex {
    int real;
    int img;

public:
    // constructor
    complex(int r, int i) { 
        real = r;
        img = i;
    }

    // pre increment
    complex operator++() {
        real++;
        return *this;
    }
    
    // post increment
    complex operator++(int) {
        complex temp = *this;
        real++;
        return temp;
    }

    // += opeartor
    complex operator+=(int value) {
        real += value;
        return *this;
    }

    // display
    void display() {
        cout << real << " + i" << img << endl;
    }
};

int main() {
    complex c1(2,3);
    c1.display();                                       // 2+3i

    cout << "pre incerement" << endl;
    (++c1).display();                                   // 3+3i
    
    cout << "post incerement" << endl;
    (c1++).display();                                   // 3+3i

    cout << "+= incerement" << endl;
    c1+=8;
    (c1).display();                                     // 12+3i 
}
