#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Animal();  // Base class pointer to Base object
    animalPtr->sound();  // Calls Animal's sound()

    delete animalPtr;  // Clean up
    return 0;
}
