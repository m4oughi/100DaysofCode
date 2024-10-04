#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

// Derived class with private inheritance
class Dog : private Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
    void feed() {
        eat();  // Accessible within class, because it's private to Dog
    }
};

int main() {
    Dog myDog;
    // myDog.eat();   // Error: eat() is private in Dog
    myDog.bark();    // Accessible because it's defined in Dog
    myDog.feed();    // Calls eat() internally
    return 0;
}
