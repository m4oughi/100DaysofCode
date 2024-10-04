#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Vehicle {
public:
    void move() {
        cout << "Vehicle moves." << endl;
    }
};

class DogCar : public Animal, public Vehicle {
};

int main() {
    DogCar myDogCar;
    myDogCar.sound();  // Inherits from Animal
    myDogCar.move();   // Inherits from Vehicle
    return 0;
}
