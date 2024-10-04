#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog myDog;

    animalPtr = &myDog;
    animalPtr->sound();  // Calls Animal's version (not overridden)

    return 0;
}
