#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

// Derived class with public inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();   // Accessible because of public inheritance
    myDog.bark();  // Defined in Dog
    return 0;
}
