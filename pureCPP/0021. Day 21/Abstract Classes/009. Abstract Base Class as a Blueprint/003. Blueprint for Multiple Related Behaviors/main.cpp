#include <iostream>
using namespace std;

// Abstract Base Class (Blueprint)
class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starting..." << endl;
    }

    void stop() override {
        cout << "Car stopping..." << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void start() override {
        cout << "Motorcycle starting..." << endl;
    }

    void stop() override {
        cout << "Motorcycle stopping..." << endl;
    }
};

int main() {
    Vehicle* car = new Car();
    Vehicle* motorcycle = new Motorcycle();

    car->start();         // Outputs "Car starting..."
    motorcycle->start();  // Outputs "Motorcycle starting..."

    car->stop();          // Outputs "Car stopping..."
    motorcycle->stop();   // Outputs "Motorcycle stopping..."

    delete car;
    delete motorcycle;

    return 0;
}
