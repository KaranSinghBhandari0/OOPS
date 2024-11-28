#include <iostream>
#include <string>
using namespace std;

// Stack Unwinding => When an exception is thrown, the program exits from the current scope and searches for an appropriate catch block to handle the exception. If the exception isn't caught in the immediate function, C++ starts unwinding the call stack, calling destructors (if any) for objects in the scope, and moving up the call stack until it finds a catch block that can handle the exception.

void fun3() {
    cout<< "Reached func3" << endl;
    throw (5);
    cout << "finished func 3" << endl;
};
void fun2() {
    fun3();
    cout << "finished func 2" << endl;
};
void fun1() {
    fun2();
    cout << "finished func 1" << endl;
};

int main() {
    try
    {
        fun1();
        cout << "World";
    }
    catch(int x)
    {
        cout << "Divide by zero exception" << endl;
    }
    
}

// This is called stack unwinding when many functions are added to a execution stack but not executed (because of not having catch statement)

// Once an exception is thrown, no further code in the function is executed after the throw statement, making the code after throw unreachable.