#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Bark" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow" << std::endl;
    }
};

int main() {
    Animal* animals[2];  // Array of pointers to base class

    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();  // Calls the correct overridden function
    }

    for (int i = 0; i < 2; ++i) {
        delete animals[i];  // Free dynamically allocated memory
    }

    return 0;
}
