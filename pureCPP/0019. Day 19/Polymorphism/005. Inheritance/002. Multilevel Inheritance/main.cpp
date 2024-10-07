#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammal is breathing" << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();      // Inherited from Animal
    dog.breathe();  // Inherited from Mammal
    dog.bark();     // Dog's own method
    return 0;
}
