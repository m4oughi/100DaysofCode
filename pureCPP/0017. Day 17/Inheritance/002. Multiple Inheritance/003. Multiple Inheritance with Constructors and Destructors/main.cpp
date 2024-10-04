#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }
    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called." << endl;
    }
    ~Vehicle() {
        cout << "Vehicle destructor called." << endl;
    }
};

class DogCar : public Animal, public Vehicle {
public:
    DogCar() {
        cout << "DogCar constructor called." << endl;
    }
    ~DogCar() {
        cout << "DogCar destructor called." << endl;
    }
};

int main() {
    DogCar myDogCar;
    return 0;
}
