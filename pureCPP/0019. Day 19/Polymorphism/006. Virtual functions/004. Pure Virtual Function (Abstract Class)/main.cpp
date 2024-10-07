#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function (abstract class)
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
    Dog dog;
    Cat cat;

    dog.sound();  // Calls Dog's implementation
    cat.sound();  // Calls Cat's implementation

    return 0;
}
