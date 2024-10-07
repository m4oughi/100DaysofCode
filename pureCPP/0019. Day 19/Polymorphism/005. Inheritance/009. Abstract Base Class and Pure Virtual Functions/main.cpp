#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow Meow" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.makeSound();  // Calls Dog's implementation
    cat.makeSound();  // Calls Cat's implementation
    return 0;
}
