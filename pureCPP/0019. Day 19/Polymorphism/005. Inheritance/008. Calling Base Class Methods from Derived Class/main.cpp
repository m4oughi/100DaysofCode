#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        Animal::makeSound();  // Calling base class method
        cout << "Woof Woof" << endl;
    }
};

int main() {
    Dog dog;
    dog.makeSound();  // Calls both the base class and derived class method
    return 0;
}
