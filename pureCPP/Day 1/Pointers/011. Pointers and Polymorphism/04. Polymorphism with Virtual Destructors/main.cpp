#include <iostream>

class Animal {
public:
    virtual ~Animal() {  // Virtual destructor
        std::cout << "Animal destructor called" << std::endl;
    }
    virtual void makeSound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    ~Dog() override {
        std::cout << "Dog destructor called" << std::endl;
    }
    void makeSound() override {
        std::cout << "Bark" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound();  // Output: Bark

    delete animal;  // Calls both Dog and Animal destructors

    return 0;
}
