#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

void displaySound(Animal animal) {  // Slicing occurs here
    animal.makeSound();  // Calls Animal's version due to slicing
}

int main() {
    Dog myDog;
    displaySound(myDog);  // Object slicing: Downcasting by value causes loss of information

    return 0;
}
