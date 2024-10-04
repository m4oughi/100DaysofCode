#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal(int a) {
        cout << "Animal with age: " << a << " created." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(int a) : Animal(a) {
        cout << "Dog with age passed to Animal created." << endl;
    }
};

int main() {
    Dog myDog(5);  // Passes the parameter to the base class constructor
    return 0;
}
