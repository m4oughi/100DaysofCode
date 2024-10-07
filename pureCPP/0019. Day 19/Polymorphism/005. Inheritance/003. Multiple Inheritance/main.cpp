#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Wheels {
public:
    void roll() {
        cout << "Wheels are rolling" << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

int main() {
    Car car;
    car.start();   // Inherited from Engine
    car.roll();    // Inherited from Wheels
    car.drive();   // Car's own method
    return 0;
}
