#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

// Derived class inheriting from the base class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();   // Inherited from base class
    myDog.bark();  // Defined in derived class
    return 0;
}
