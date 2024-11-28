#include <iostream>
#include <string>
using namespace std;

class RationalNumber {
private:
    int num, den;
    void reduce() {
        int lowest = 2;

        while(lowest <= num && lowest <= den) {
            if(num%lowest == 0 && den%lowest == 0) {
                num = num/lowest;
                den = den/lowest;
            } else {
                lowest++;
            }
        }
    }
    
public:
    // constructor
    RationalNumber(int n, int d) {
        if(den == 0) {
            throw(0);
        } else {
            num = n;
            den = d;
            reduce();
        }
    }

    // print
    void display() {
        cout << num << "/" << den << endl;
    }

    friend RationalNumber operator+(RationalNumber r1, RationalNumber r2);
};

RationalNumber operator+(RationalNumber r1, RationalNumber r2) {
    int num = r1.num*r2.den + r2.num*r1.den;
    int den = r1.den*r2.den;
    RationalNumber r3(num,den);
    return r3;
}

int main() {
    try {
        RationalNumber r1(15,3);
        RationalNumber r2(1,5);
        RationalNumber r3 = r1+ r2;
        r3.display();
    }
    catch(int x) {
        cout << "den is 0" << endl;
    }
    
}
