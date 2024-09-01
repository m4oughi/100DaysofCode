#include <iostream>
#include <vector>
#include <memory> // For std::unique_ptr

using namespace std;

// Abstract class
class Animal {
public:

    // Pure Virtual function
    virtual void makeSound() const = 0;

    // Virtual destructor
    virtual ~Animal() {}
};

// Derived class for Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof! Woof!" << endl;
    }
};

// Derived class for Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow! Meow!" << endl;
    }
};

// Derived class for Cow
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Moooo! Moooo!" << endl;
    }
};

int main() {
    vector < unique_ptr<Animal> > animals;

    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Cat>());
    animals.push_back(make_unique<Cow>());

    for (const auto& animal : animals) {
        animal -> makeSound();
    }

    return 0;
}