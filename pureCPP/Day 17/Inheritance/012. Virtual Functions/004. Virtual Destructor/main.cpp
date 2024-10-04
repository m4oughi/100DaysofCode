#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal created." << endl;
    }

    virtual ~Animal() {  // Virtual destructor
        cout << "Animal destroyed." << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog created." << endl;
    }

    ~Dog() override {
        cout << "Dog destroyed." << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();
    delete animalPtr;  // Calls both Dog's and Animal's destructors
    return 0;
}
