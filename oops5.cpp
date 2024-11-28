#include <iostream>
#include <string>
using namespace std;

// Composition => Composition in C++ is a design principle in object-oriented programming where one class contains members of another class.

// ek class ko dusri class mai use karna or uske members ko use karna is compostion

class engine {
    public:
    void startEngine() {
        cout << "Engine Started" << endl;
    }
    void stopEngine() {
        cout << "Engine Stopped" << endl;
    }
};

class car {
    engine eng;        // using engine class

    public:
    void startCar() {
        eng.startEngine();
        cout << "Car Started" << endl;
    }
    void stopCar() {
        eng.stopEngine();
        cout << "Car Stopped" << endl;
    }
};

int main() {
    car alto;
    alto.startCar();
    alto.stopCar();
}
