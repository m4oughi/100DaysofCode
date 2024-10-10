#include <iostream>
using namespace std;

// Abstract Base Class
class Animal {
public:
    void sleep() {
        cout << "Sleeping..." << endl;
    }
    
    virtual void makeSound() = 0;  // Pure virtual function
};

// Derived Class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Dog dog;
    dog.sleep();      // Outputs: Sleeping...
    dog.makeSound();  // Outputs: Bark!

    return 0;
}
