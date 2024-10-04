#include <iostream>
using namespace std;

// Base classes
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound." << endl;
    }
};

class Machine {
public:
    virtual void move() {
        cout << "Machine moves." << endl;
    }
};

// Derived classes
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Car : public Machine {
public:
    void move() override {
        cout << "Car drives." << endl;
    }
};

// Hybrid inheritance
class RobotDog : public Dog, public Car {
public:
    void sound() override {
        cout << "RobotDog makes mechanical barks." << endl;
    }
};

int main() {
    RobotDog myRobotDog;
    myRobotDog.sound();  // Calls RobotDog's overridden sound method
    myRobotDog.move();   // Calls Car's move method due to multiple inheritance

    return 0;
}
