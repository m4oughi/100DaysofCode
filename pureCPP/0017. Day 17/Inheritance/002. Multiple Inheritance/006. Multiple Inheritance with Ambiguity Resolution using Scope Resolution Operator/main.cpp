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
    void sound() {
        Animal::sound();  // Calls Animal's sound()
        Vehicle::sound(); // Calls Vehicle's sound()
    }
};

int main() {
    DogCar myDogCar;
    myDogCar.sound(); // Resolves ambiguity by using scope resolution
    return 0;
}
