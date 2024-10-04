#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;   // Pure virtual function
    virtual void move() = 0;    // Another pure virtual function
};

// Derived class Dog implementing all abstract methods
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
    void move() override {
        cout << "Dog runs." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();  // Calls the overridden sound function
    myDog.move();   // Calls the overridden move function
    return 0;
}
