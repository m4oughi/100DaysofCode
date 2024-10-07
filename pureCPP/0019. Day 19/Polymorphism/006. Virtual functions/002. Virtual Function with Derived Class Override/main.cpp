#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof" << endl;
    }
};

int main() {
    Animal* animal1 = new Cat();
    Animal* animal2 = new Dog();

    animal1->sound();  // Calls Cat's sound
    animal2->sound();  // Calls Dog's sound

    delete animal1;
    delete animal2;
    return 0;
}
