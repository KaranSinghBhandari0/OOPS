#include <iostream>
#include <string>
using namespace std;

// Nested try catch with multiple catch

int main () {
    int a = 10;

    try {
        if (a == 0) {
            throw(a);  // Throw an int for zero
        } 
        else if (a > 0) {
            throw('a');  // Throw a char for positive numbers
        } 
        else {
            throw("negative");  // Throw a const char* for negative numbers
        }
    }
    catch (int a) {
        cout << "Number is zero" << endl;
    }
    catch (char a) {
        cout << "Number is positive" << endl;
    }
    catch (const char* a) {
        cout << "Number is negative" << endl;
    }

    return 0;
    
}