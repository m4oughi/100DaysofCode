#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; ++i) {
        if (Dog* dogPtr = dynamic_cast<Dog*>(animals[i])) {
            cout << "This is a dog!" << endl;
            dogPtr->makeSound();  // Safe downcasting
        } else if (Cat* catPtr = dynamic_cast<Cat*>(animals[i])) {
            cout << "This is a cat!" << endl;
            catPtr->makeSound();  // Safe downcasting
        } else {
            cout << "Unknown animal." << endl;
        }
    }

    for (int i = 0; i < 2; ++i) {
        delete animals[i];
    }

    return 0;
}
