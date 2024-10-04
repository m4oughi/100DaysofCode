#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

// Derived class implementing the pure virtual function
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog;
    animalPtr->sound();  // Calls Dog's implementation of sound()
    delete animalPtr;
    return 0;
}
