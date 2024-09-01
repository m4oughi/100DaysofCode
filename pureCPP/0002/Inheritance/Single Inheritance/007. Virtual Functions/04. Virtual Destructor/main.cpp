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
    virtual void sound() {
        cout << "Some generic animal sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog created." << endl;
    }
    ~Dog() {
        cout << "Dog destroyed." << endl;
    }
    void sound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();  // Base class pointer to Derived object
    animalPtr->sound();  // Calls Dog's sound()

    delete animalPtr;  // Ensures both destructors are called due to virtual destructor
    return 0;
}
