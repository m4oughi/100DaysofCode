#include <iostream>

class Animal {
public:
    virtual void makeSound() {  // Virtual function
        std::cout << "Animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {  // Override the base class function
        std::cout << "Bark" << std::endl;
    }
};

int main() {
    Animal* animalPtr = new Dog();  // Pointer to base class points to derived class object
    animalPtr->makeSound();  // Calls Dog's makeSound() due to polymorphism

    delete animalPtr;  // Free dynamically allocated memory
    return 0;
}
