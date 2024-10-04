#include <iostream>
using namespace std;

// Base classes
class Animal {
public:
    void breathe() {
        cout << "Animal is breathing." << endl;
    }
};

class Machine {
public:
    void move() {
        cout << "Machine is moving." << endl;
    }
};

// Derived classes
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks." << endl;
    }
};

class Car : public Machine {
public:
    void drive() {
        cout << "Car drives." << endl;
    }
};

// Hybrid inheritance
class DogCar : public Mammal, public Car {
public:
    void barkAndDrive() {
        cout << "DogCar barks and drives!" << endl;
    }
};

int main() {
    DogCar myDogCar;

    myDogCar.breathe();  // Inherited from Animal via Mammal
    myDogCar.walk();     // Inherited from Mammal
    myDogCar.move();     // Inherited from Machine via Car
    myDogCar.drive();    // Inherited from Car
    myDogCar.barkAndDrive();  // Defined in DogCar

    return 0;
}
