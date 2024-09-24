#include <iostream>

class AbstractAnimal {
public:
    virtual void makeSound() const = 0;  // Pure virtual function
    virtual void move() const = 0;       // Another pure virtual function
};

class Dog : public AbstractAnimal {
public:
    void makeSound() const override {
        std::cout << "Woof!" << std::endl;
    }

    void move() const override {
        std::cout << "Dog is running." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.makeSound();
    dog.move();

    return 0;
}
