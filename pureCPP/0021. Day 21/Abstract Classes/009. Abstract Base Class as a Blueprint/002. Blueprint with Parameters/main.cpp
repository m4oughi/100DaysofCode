#include <iostream>
using namespace std;

// Abstract Base Class (Blueprint)
class Animal {
public:
    virtual void makeSound(int times) = 0;  // Pure virtual function with a parameter
};

class Dog : public Animal {
public:
    void makeSound(int times) override {
        for (int i = 0; i < times; ++i) {
            cout << "Woof!" << endl;
        }
    }
};

class Cat : public Animal {
public:
    void makeSound(int times) override {
        for (int i = 0; i < times; ++i) {
            cout << "Meow!" << endl;
        }
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(2);  // Outputs "Woof!" twice
    animal2->makeSound(3);  // Outputs "Meow!" three times

    delete animal1;
    delete animal2;

    return 0;
}
