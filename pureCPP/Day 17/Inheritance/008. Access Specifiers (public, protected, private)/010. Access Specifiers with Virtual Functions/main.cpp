#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

public:
    void makeSound() {
        sound();  // Calls the overridden version in derived class
    }
};

// Derived class
class Dog : public Animal {
protected:
    void sound() override {  // Overrides protected virtual method
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();  // Calls Dog's sound method because of virtual function
    return 0;
}
