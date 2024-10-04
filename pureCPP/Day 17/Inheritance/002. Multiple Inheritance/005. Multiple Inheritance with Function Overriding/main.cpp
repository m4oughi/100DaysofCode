#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound." << endl;
    }
};

class Vehicle {
public:
    void sound() {
        cout << "Vehicle horn." << endl;
    }
};

class DogCar : public Animal, public Vehicle {
public:
    void sound() {  // Overrides both base classes' sound()
        cout << "DogCar combined sound." << endl;
    }
};

int main() {
    DogCar myDogCar;
    myDogCar.sound(); // Calls overridden sound() in DogCar
    return 0;
}
