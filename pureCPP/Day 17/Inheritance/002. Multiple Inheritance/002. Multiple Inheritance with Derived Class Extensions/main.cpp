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
public:
    void transform() {
        cout << "DogCar transforms into a powerful machine!" << endl;
    }
};

int main() {
    DogCar myDogCar;
    myDogCar.sound();
    myDogCar.move();
    myDogCar.transform();  // DogCar-specific functionality
    return 0;
}
