#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {  // Virtual function
        cout << "Some generic animal sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {  // Override the base class function
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();  // Base class pointer to Derived object
    animalPtr->sound();  // Calls Dog's sound() due to polymorphism

    delete animalPtr;  // Clean up
    return 0;
}
