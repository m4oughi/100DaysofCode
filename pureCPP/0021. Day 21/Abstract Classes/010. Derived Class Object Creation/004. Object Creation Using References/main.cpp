#include <iostream>
using namespace std;

// Abstract Base Class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};

void makeSound(Animal& animal) {
    animal.sound();  // Polymorphic behavior with reference
}

int main() {
    Dog dog;
    Cat cat;

    makeSound(dog);  // Outputs "Woof!"
    makeSound(cat);  // Outputs "Meow!"

    return 0;
}
