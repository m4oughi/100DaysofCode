#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    void breathe() {
        cout << "Animal breathes." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
    void live() {
        breathe();  // Accessible within the derived class
    }
};

int main() {
    Dog myDog;
    // myDog.breathe();  // Error: breathe() is protected in Animal
    myDog.bark();        // Accessible because it's defined in Dog
    myDog.live();        // Calls breathe() internally
    return 0;
}
