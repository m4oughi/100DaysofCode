#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal(int a) {
        cout << "Animal created with age: " << a << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(int a) : Animal(a) {
        cout << "Dog created with age passed to Animal." << endl;
    }
};

int main() {
    Dog myDog(5);  // Passing parameter to base class constructor
    return 0;
}
