#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound." << endl;
    }
    virtual void breathe() {
        cout << "Animal is breathing." << endl;
    }
};

class Machine {
public:
    virtual void move() {
        cout << "Machine moves." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
    void breathe() override {
        cout << "Dog is breathing." << endl;
    }
};

class Car : public Machine {
public:
    void move() override {
        cout << "Car drives." << endl;
    }
};

class RobotDog : public Dog, public Car {
public:
    void sound() override {
        cout << "RobotDog makes mechanical barks." << endl;
    }
    void move() override {
        cout << "RobotDog rolls on wheels." << endl;
    }
};

void performActions(Animal* animal, Machine* machine) {
    animal->sound();  // Polymorphism with virtual functions
    animal->breathe();
    machine->move();
}

int main() {
    RobotDog myRobotDog;
    performActions(&myRobotDog, &myRobotDog);

    return 0;
}
