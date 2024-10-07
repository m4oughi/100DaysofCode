#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "This is an animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow Meow" << endl;
    }
};

int main() {
    Animal* animal;
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound();  // Calls Dog's sound function

    animal = &cat;
    animal->sound();  // Calls Cat's sound function

    return 0;
}
