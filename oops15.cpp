// Exception Handling => exception handling in C++ is a crucial feature to deal with runtime errors, ensuring that your program can handle errors gracefully without crashing. It allows you to "catch" errors and take corrective actions when something goes wrong, such as dividing by zero.

#include <iostream>
#include <string>
using namespace std;

// Divide By Zero
double divide(int a, int b) {
    if (b == 0) {
        throw (b);
    }
    return (double) a/b;
}

int main() {
    int a = 16;
    int b = 0;
    try {
        cout << a << "/" << b << " = " << divide(a, b) << endl;
    }
    catch(int e) {
        cout << "can't divide by 0" << endl;
    }
    
    return 0;
}