#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

void playSound(Animal& animal) {  // Base class reference
    animal.makeSound();  // Will call the correct derived class method
}

int main() {
    Cat myCat;
    playSound(myCat);  // Upcasting occurs automatically

    return 0;
}
