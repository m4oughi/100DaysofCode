#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    Animal() {
        cout << "Animal created." << endl;
    }
    virtual ~Animal() {
        cout << "Animal destroyed." << endl;
    }

    virtual void sound() = 0;   // Pure virtual function
};

// Derived class Dog implementing the abstract method
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog created." << endl;
    }
    ~Dog() override {
        cout << "Dog destroyed." << endl;
    }
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();
    animalPtr->sound();  // Calls the overridden sound function
    delete animalPtr;    // Calls destructors in proper order
    return 0;
}
