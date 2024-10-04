#include <iostream>
using namespace std;

// Abstract base class Product
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

// Concrete class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Abstract class Creator (Factory)
class AnimalFactory {
public:
    virtual Animal* createAnimal() = 0;  // Pure virtual factory method
};

// Concrete Factory for creating Dog
class DogFactory : public AnimalFactory {
public:
    Animal* createAnimal() override {
        return new Dog();
    }
};

int main() {
    AnimalFactory* factory = new DogFactory();
    Animal* myAnimal = factory->createAnimal();  // Factory creates a Dog
    myAnimal->sound();  // Calls Dog's sound function
    delete myAnimal;
    delete factory;
    return 0;
}