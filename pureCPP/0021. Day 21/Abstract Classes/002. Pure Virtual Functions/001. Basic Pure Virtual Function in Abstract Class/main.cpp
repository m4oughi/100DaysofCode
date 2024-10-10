#include <iostream>
using namespace std;

class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Cat cat;
    cat.makeSound();  // Outputs "Meow!"
    return 0;
}
