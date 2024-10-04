#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound." << endl;
    }
};

class Vehicle {
public:
    virtual void sound() {
        cout << "Vehicle horn." << endl;
    }
};

class DogCar : public Animal, public Vehicle {
public:
    void sound() override { // Override both base class virtual functions
        cout << "DogCar unique sound." << endl;
    }
};

int main() {
    Animal* myDogCar = new DogCar();
    myDogCar->sound();  // Calls DogCar's overridden sound method
    delete myDogCar;
    return 0;
}
