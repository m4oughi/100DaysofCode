#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;   // Pure virtual function
    void sleep() {              // Regular function
        cout << "Animal sleeps." << endl;
    }
};

// Derived class Dog implementing the abstract method
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();  // Calls the overridden sound function
    myDog.sleep();  // Calls the base class sleep function
    return 0;
}
