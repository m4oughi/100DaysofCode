#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog says Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says Meow!" << endl;
    }
};

class Bird : public Animal {
public:
    void speak() override {
        cout << "Bird says Tweet!" << endl;
    }
};

void makeAnimalSpeak(Animal* animal) {
    animal->speak();  // Dynamic dispatch with base class pointer
}

int main() {
    Dog dog;
    Cat cat;
    Bird bird;

    Animal* animals[] = { &dog, &cat, &bird };

    for (Animal* animal : animals) {
        makeAnimalSpeak(animal);  // Dynamic dispatch for each animal
    }

    return 0;
}
