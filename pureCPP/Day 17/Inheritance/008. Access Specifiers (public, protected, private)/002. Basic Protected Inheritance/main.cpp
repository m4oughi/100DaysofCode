#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

// Derived class with protected inheritance
class Dog : protected Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
    void feed() {
        eat();  // Accessible because of protected inheritance
    }
};

int main() {
    Dog myDog;
    // myDog.eat();   // Error: eat() is protected in Dog
    myDog.bark();     // Accessible because it's defined in Dog
    myDog.feed();     // Calls eat() internally
    return 0;
}
