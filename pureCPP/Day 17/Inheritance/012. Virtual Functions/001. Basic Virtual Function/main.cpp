#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class overriding the virtual function
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog myDog;

    animalPtr = &myDog;
    animalPtr->sound();  // Calls Dog's sound() because of the virtual keyword
    return 0;
}
