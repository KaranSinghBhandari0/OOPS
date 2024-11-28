#include <iostream>
#include <string>
using namespace std;

// Nested try catch with single catch

int main () {
    int a = 10;

    try {
        if (a == 0) {
            throw(a);
        } 
        else if (a > 0) {
            throw('a');
        } 
        else {
            throw("negative");
        }
    }
    catch(...) {               // This accepts all errors
        cout << "Some error occured !!!" << endl;
    }

    return 0;
}