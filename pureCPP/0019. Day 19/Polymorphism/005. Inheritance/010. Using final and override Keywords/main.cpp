#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Generic Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof Woof" << endl;
    }
};

class Labrador final : public Dog {
public:
    void makeSound() override {
        cout << "Labrador Woof Woof" << endl;
    }
};

// Uncommenting the following code will cause a compilation error due to `final`
// class AnotherLabrador : public Labrador {};

int main() {
    Labrador lab;
    lab.makeSound();  // Calls Labrador's makeSound method
    return 0;
}
