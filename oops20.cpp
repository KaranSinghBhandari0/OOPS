#include <iostream>
#include <string>
using namespace std;

// Templates => The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types. For example, if we want sum of any two number int or double so we don't need to write functions for each. We can do this using function templates

template <typename T>
T Sum(T a, T b) {
    return a+b;
};

int main() {
    cout << Sum(3,4) << endl;
    cout << Sum(1.2 , 3.6) << endl;
}