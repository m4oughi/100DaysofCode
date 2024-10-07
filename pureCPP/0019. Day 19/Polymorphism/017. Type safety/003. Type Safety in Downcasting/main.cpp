#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {};

int main() {
    Animal* animal = new Dog();  // Upcast to Animal
    Dog* dogPtr = dynamic_cast<Dog*>(animal);  // Safe downcast using dynamic_cast

    if (dogPtr) {
        dogPtr->bark();  // Calls Dog's bark method safely
    } else {
        cout << "Invalid cast!" << endl;
    }

    delete animal;
    return 0;
}
