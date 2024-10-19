#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animalPtr = new Cat();  // Upcasting Cat to Animal
    Dog* dogPtr = static_cast<Dog*>(animalPtr);  // Invalid downcasting

    dogPtr->makeSound();  // Undefined behavior (wrong object type)

    delete animalPtr;
    return 0;
}
