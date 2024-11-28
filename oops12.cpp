// Virtual Function => a base class member function that you can redefine in a derived class to achieve polymorphism.
#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base = 1;
    virtual void display(){
        cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived = 2;
    void display(){
        cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
        cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
    }
};

int main(){
    BaseClass * base_class_pointer;                 // cretaing base class pointer

    BaseClass obj_base;                             // create a base class object
    DerivedClass obj_derived;                       // create a derived class obj

    base_class_pointer = &obj_derived;              // Pointing base class pointer to derived class           (base class pointer can point to derived class)
    
    base_class_pointer->display();                  // This will call the Base Class (if we make virtual in base display then derived class ka call hoga)
}