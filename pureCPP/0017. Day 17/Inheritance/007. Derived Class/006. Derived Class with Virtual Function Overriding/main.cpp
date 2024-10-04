#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class overriding virtual method
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog;
    animalPtr->sound();  // Calls Dog's sound method due to virtual function
    delete animalPtr;
    return 0;
}
