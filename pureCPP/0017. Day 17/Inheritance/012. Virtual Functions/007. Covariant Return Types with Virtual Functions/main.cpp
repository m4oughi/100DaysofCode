#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual Animal* getAnimal() {
        cout << "Returning Animal object." << endl;
        return this;
    }
};

// Derived class Dog returning a covariant type
class Dog : public Animal {
public:
    Dog* getAnimal() override {
        cout << "Returning Dog object." << endl;
        return this;
    }
};

int main() {
    Animal* animalPtr;
    Dog myDog;

    animalPtr = &myDog;
    animalPtr->getAnimal();  // Calls Dog's getAnimal()
    return 0;
}
