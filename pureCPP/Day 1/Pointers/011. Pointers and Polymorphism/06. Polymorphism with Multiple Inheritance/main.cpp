#include <iostream>

class Animal {
public:
    virtual void eat() {
        std::cout << "Animal eats" << std::endl;
    }
    virtual ~Animal() {}
};

class Bird {
public:
    virtual void fly() {
        std::cout << "Bird flies" << std::endl;
    }
    virtual ~Bird() {}
};

class Sparrow : public Animal, public Bird {
public:
    void eat() override {
        std::cout << "Sparrow eats seeds" << std::endl;
    }

    void fly() override {
        std::cout << "Sparrow flies" << std::endl;
    }
};

int main() {
    Sparrow* sparrow = new Sparrow();

    Animal* animalPtr = sparrow;  // Pointer to base class Animal
    Bird* birdPtr = sparrow;      // Pointer to base class Bird

    animalPtr->eat();  // Output: Sparrow eats seeds
    birdPtr->fly();    // Output: Sparrow flies

    delete sparrow;  // Properly delete the derived object

    return 0;
}
