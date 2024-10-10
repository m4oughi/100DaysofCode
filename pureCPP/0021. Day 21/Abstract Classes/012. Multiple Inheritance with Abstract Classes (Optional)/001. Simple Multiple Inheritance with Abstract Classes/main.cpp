#include <iostream>
using namespace std;

// Abstract Class 1
class Flyable {
public:
    virtual void fly() = 0;  // Pure virtual function
};

// Abstract Class 2
class Swimmable {
public:
    virtual void swim() = 0;  // Pure virtual function
};

// Derived Class
class Duck : public Flyable, public Swimmable {
public:
    void fly() override {
        cout << "Duck is flying!" << endl;
    }
    void swim() override {
        cout << "Duck is swimming!" << endl;
    }
};

int main() {
    Duck d;
    d.fly();    // Outputs: Duck is flying!
    d.swim();   // Outputs: Duck is swimming!

    return 0;
}
