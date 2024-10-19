#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Bark!" << endl;
    }
};

int main() {
    Dog myDog;
    Animal* animalPtr = &myDog;  // Upcasting: Dog* to Animal*

    animalPtr->makeSound();  // Calls Animal's version

    return 0;
}
