#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {  // Override the pure virtual function
        cout << "Bark!" << endl;
    }
};

int main() {
    Dog dog;
    dog.sound();  // Calls the overridden function in Dog

    // Animal animal;  // Error: Cannot instantiate abstract class

    return 0;
}
