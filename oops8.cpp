#include <iostream>
#include <string>
using namespace std;

// operator overloading => C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. Operator overloading is a compile-time polymorphism. For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +.



// add two complex number using + operator  (non-member function)

// class Complex {
//     int real;
//     int img;
    
//     public:
//     Complex(int real, int img) {
//         this->real = real;
//         this->img = img;
//     }
//     void display() {
//         cout << real << " + i" << img << endl;
//     }
    
//     friend Complex operator+(Complex o1, Complex o2);
// };

// Complex operator+(Complex o1, Complex o2) {
//     int newReal = (o1.real+o2.real);
//     int newImg = (o1.img+o2.img);
    
//     return Complex(newReal,newImg);
// }

// int main() {
//     Complex c1(3,6);
//     Complex c2(7,2);
//     Complex c3 = c1+c2;
//     c3.display();
// }



// add two complex number using + operator using member function

// class Complex {
//     int real;
//     int img;
    
//     public:
//     Complex(int real = 0, int img = 0) {
//         this->real = real;
//         this->img = img;
//     }
    
//     // Member function to overload + operator
//     Complex operator+(Complex const &obj) {
//         Complex result;
//         result.real = real + obj.real;
//         result.img = img + obj.img;
//         return result;
//     }
    
//     void display() const {
//         cout << real << " + i" << img << endl;
//     }
// };

// int main() {
//     Complex c1(3,6);
//     Complex c2(7,2);
    
//     // Operator overloading using member function
//     Complex c3 = c1 + c2;
    
//     c3.display();
//     return 0;
// }















// add two fractions using + operator
// class fraction {
//     int num;
//     int den;

//     public:

//     fraction(int num, int den) {
//         this->num = num;
//         this->den = den;
//     }

//     friend fraction operator+(fraction &o1 , fraction &o2);

//     void print() {
//         cout << "Fraction is : " << num << "/" << den << endl;
//     }
// };

// fraction operator+(fraction &o1 , fraction &o2) {
//     int numerator = (o1.num*o2.den) + (o2.num*o1.den);
//     int denominator = (o1.den * o2.den);
//     return fraction(numerator,denominator);
// };

// int main() {
//     fraction f1(3,4);
//     fraction f2(4,3);

//     fraction f3 = f1 + f2;
//     f3.print();
// }