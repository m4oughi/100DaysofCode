#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function

    virtual ~Animal() {
        cout << "Animal destroyed." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {  // Override the pure virtual function
        cout << "Bark!" << endl;
    }

    ~Dog() {
        cout << "Dog destroyed." << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();  // Base class pointer to Derived object
    animalPtr->sound();  // Calls Dog's sound()

    delete animalPtr;  // Ensures proper cleanup
    return 0;
}
