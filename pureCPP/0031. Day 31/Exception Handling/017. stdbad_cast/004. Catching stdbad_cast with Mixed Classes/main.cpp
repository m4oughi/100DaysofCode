#include <iostream>
#include <typeinfo>

class Animal {
    virtual void sound() {}
};

class Dog : public Animal {};

class Car {
    virtual void drive() {}
};

int main() {
    try {
        Animal* animalPtr = new Dog();
        Car* carPtr = dynamic_cast<Car*>(animalPtr);  // Invalid cast between unrelated classes
        if (!carPtr) {
            throw std::bad_cast();
        }
    } catch (const std::bad_cast& e) {
        std::cout << "Caught bad_cast between unrelated classes: " << e.what() << std::endl;
    }
    return 0;
}
