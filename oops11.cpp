// Polymorphism -> poly=many & morphism=form polymorphism means many form. A fundamental concept in object-oriented programming (OOP) that allows objects to be represented in multiple forms. e.g. function overloading , operator overloading
// 1. Complile Time Polymorphism (function overloading) => compilation ke time decision le liya jata hai achieved using opeator overloading or function overloading
// 2. Run Time Polymorphism => compile karne ke bad decesion liya jata hai using virtual functions


// pointers to derived class
#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
    }
};


int main(){
    BaseClass * base_class_pointer;                 // cretaing base class pointer

    BaseClass obj_base;                             // create a base class object
    DerivedClass obj_derived;                       // create a derived class obj

    base_class_pointer = &obj_derived;              // Pointing base class pointer to derived class           (base class pointer can point to derived class)

    base_class_pointer->var_base = 34;              // assigning var_base
    // base_class_pointer->var_derived= 134;        // Will throw an error because var-derived is present in derived class and pointer is pointing to base cls
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;           // create derived class pointer
    derived_class_pointer = &obj_derived;           // a pointer pointing to derived class
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    base_class_pointer->display();
}

