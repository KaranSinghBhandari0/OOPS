#include <iostream>
#include <string>
using namespace std;

// Nested try catch
int main () {

    try {
        try {
            throw "charcter exception";
        }
        catch(const char *e) {
            cout << "Error in inner catch bloack" << endl;
            cout<< "Throwing to outer catch" << endl;
            throw;                                               // if we add this throw over here the exception will be thrown to outer catch
        }
    } 
    catch(const char *e) {
        cout << "Error in outer catch bloack" << endl;
    }
    catch(...) {
        cout << "Some Error Occured"<< endl;
    }
    
}