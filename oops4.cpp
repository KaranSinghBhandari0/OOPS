// diffrence b/w memberwise assignment and copy constructor
#include <iostream>
#include <string>
using namespace std;

class student {
    public :
    
    string name;
    int age;

    // constructor
    student(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

int main() {
    student s1("Karan", 21);

    // copy constructor (new object is created)
    student s2 = s1;
    cout << s2.name <<endl;

    // memberwise assignment (existing object ko kisi or object ka data assign) 
    student s3("Nikhil", 15);
    s3 = s1;
    cout << s3.age;
}
