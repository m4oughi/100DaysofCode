#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;   // Pure virtual function
    virtual void habitat() {
        cout << "Lives in a habitat." << endl;
    }
};

// Intermediate derived class providing partial implementation
class Mammal : public Animal {
public:
    void habitat() override {
        cout << "Mammal lives on land." << endl;
    }
};

// Concrete derived class providing full implementation
class Dog : public Mammal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();    // Calls Dog's sound function
    myDog.habitat();  // Calls Mammal's habitat function
    return 0;
}
