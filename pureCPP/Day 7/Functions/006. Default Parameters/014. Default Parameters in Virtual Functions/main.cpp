#include <iostream>

class Animal {
public:
    // Virtual function with default parameter
    virtual void makeSound(int volume = 5) const {
        std::cout << "Animal sound at volume: " << volume << std::endl;
    }
};

class Dog : public Animal {
public:
    // Overriding virtual function
    void makeSound(int volume = 8) const override {
        std::cout << "Dog barking at volume: " << volume << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound();       // Uses Dog's default volume (8)
    animal->makeSound(3);      // Custom volume
    delete animal;
    return 0;
}
