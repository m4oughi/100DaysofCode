#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound();  // Outputs "Woof!"
    delete animal;
    return 0;
}
