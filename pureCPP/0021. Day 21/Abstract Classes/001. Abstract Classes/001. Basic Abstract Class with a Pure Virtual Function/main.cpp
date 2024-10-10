#include <iostream>
using namespace std;

class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog dog;
    dog.makeSound();
    return 0;
}
