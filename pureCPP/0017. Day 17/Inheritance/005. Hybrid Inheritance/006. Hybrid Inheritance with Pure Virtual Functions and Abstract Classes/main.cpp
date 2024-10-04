#include <iostream>
using namespace std;

// Abstract base classes
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Machine {
public:
    virtual void move() = 0;   // Pure virtual function
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

// Hybrid inheritance with abstract classes
class RobotDog : public Dog, public Car {
public:
    void sound() override {
        cout << "RobotDog makes mechanical barks." << endl;
    }

    void move() override {
        cout << "RobotDog rolls on wheels." << endl;
    }
};

int main() {
    RobotDog myRobotDog;

    myRobotDog.sound();  // Calls RobotDog's implementation of sound
    myRobotDog.move();   // Calls RobotDog's implementation of move

    return 0;
}
